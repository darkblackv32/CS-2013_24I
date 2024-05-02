#pragma once 

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

namespace library{

    class book
    {
    private:
        string *title;
        int pages;
        string *author = nullptr;
        float rating;
        string editorial;
        friend ostream& operator<<(ostream& os, const book& b);

    public:


        // DEFAULT CONSTRUCTOR -> 0 args

        book() : title{nullptr}{
            cout<<"default constructor\n";
            this->editorial = "Penguin Books\n";
        }

        // PARAMETERIZED CONSTRUCTOR;
        book(string _title, string _author) : title{new string(_title)}{
            cout<<"parameterized constructor\n";
            author = new string(_author);
        }

        // PARAMETERIZED CONSTRUCTOR pair<string, string>";

        book(const pair<string, string>& pair){
            cout<<"parameterized constructor pair<string, string>\n";
            // destructuring 
            auto [a, t] = pair;
            // cout<<"Author: " << a << " " << "Title: " << t << endl;
            author = new string(a);
            title = new string(t);
        }

        // TODO ~ COPY CONSTRUCTOR

        
        
        book(book& other){
            
            cout<<"copy constructor\n";

            if(other.author != nullptr)
                this->author = new string(*other.author);
            else 
                this->author = nullptr;
            
            if(other.title)
                title = new string(*other.title);
            else 
                title = nullptr;

        }
 
        /* Las referencias de valor de retorno, o referencias rvalue, son un tipo de referencia que solo se vinculan 
        a objetos temporales (rvalues). A diferencia de las referencias de valor de ubicación, o lvalue references, 
        que se pueden vincular a lvalues (objetos que tienen un estado persistente), las referencias rvalue te permiten 
        detectar y vincularte a objetos temporales. Esto es especialmente útil para optimizar la gestión de recursos, 
        como la asignación de memoria, en tus programas.*/

        // TODO ~ MOVE CONSTRUCTOR
        book(book&& other){
            
            cout<<"move constructor\n";

            if(other.author){
                author = other.author;
                other.author = nullptr;
            }

            else
                this->author = nullptr;

            if(other.title){
                title = other.title;
                other.title = nullptr;
            }

            else
                this->title = nullptr;
            
        }


        ~book(){
            cout<<"destructor\n";
            if (author != nullptr)
                delete author, author = nullptr;
            if (title)
                delete title, title = nullptr;
        };
    };

    ostream& operator<<(ostream& os, const book& b){
        os << "{ ";
        if(b.author) os << "Author: " << *b.author << " | " << " Memory Address: " << b.author << endl; 
        else os << "no data found" << endl;

        if(b.title) os << "  Title: " << *b.title << " | " << " Memory Address: " << b.title; 
        else os << "  no data found";
        os << " }" << endl;
        return os;
    }


}