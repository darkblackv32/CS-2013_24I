#include "book.h"
using namespace library;
using namespace std;
#define pb push_back     // MACRO


void ex1();


int main(){
    ex1();
}


void ex1(){
    
    book b1;

    cout << b1;

    book* b2 = new book("The Tin Drum", "Gunter Grass");

    cout << *b2;

    pair<string, string> pair("George Orwell", "1984");

    book* b3 = new book(pair);

    cout << *b3;    

    book* b4 = new book(*b3), b5 = *b4; // podemos usar el = sin haberlo sobrecargado

    cout << "b4 ----->" << *b4;
    cout << "b5 ----->" << b5;

    book* b6= new book("Brave's New World", "Aldous Huxley");

    book b7;

    cout << b7;
}
