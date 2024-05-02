#include "main.h"


void ex1(), ex2(), ex3(), ex4(), ex5();


int main(){
    // ex1();
    // ex2();
    // ex3();
}



/* Write the template function get_maximum_product_range that takes a generic container as a parameter
and returns a container with the elements that produce the maximum product obtainable by multiplying
elements from the container. */

void ex1(){

    std::deque<int> lst1 = {3, 3, -3, 5, 4, -4, 0, -4, -4, -5};
    auto result1 = get_maximum_product_range(lst1);
    for (int num : result1) {
        std::cout << num << " ";
    }

    // output: 3 3 5 4 -4 -4 -4 -5

    cout << '\n';

    std::vector<int> flst1 = {1, 2, -3, 0, 0, -3, -2, 5, -1, -5};
    auto result2 = get_maximum_product_range(flst1);
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

}


/* Defines a function generate_matrix that constructs a matrix of specified size from given container data. 
The matrix is filled row-wise until all elements of the data container are used. If the matrix size exceeds 
the number of data elements, remaining cells are filled with zero.*/

void ex2(){

    vector v1 = {1, 2, 3, 4};
    auto m1 = generate_matrix<3, 2>(v1);
    for (auto row: m1) {
    for (auto item: row)
        cout << setw(3) << item;
    cout << endl;
    }

    cout << endl;

        deque d1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        auto m2 = generate_matrix<3, 3>(d1);
        for (auto row: m2) {
        for (auto item: row)
            cout << setw(3) << item;
        cout << endl;
    }
}



/*  Develop the function template generate_polynomial that allows generating a
    function that returns the value of a polynomial f(x) for a given value of x.
    The function template could have two or more parameters that allow generating the
    polynomial: f(x) = a + bx + cx^2 + dx^3 + ex^4 + fx^5 + gx^6 + ⋯ */

void ex3(){
    cout << generate_polynomial<10, 0, 7, 2, 0, 0, 11>(5) << endl;
    cout << generate_polynomial<1, 0, 2, 3>(4.0) << endl;
    cout << generate_polynomial<1, 2, 3>(10.0f) << endl;
}

// a * 5^0 + b * 5^1 + c * 5^2 + ... 

// 21 + 300 = 321


// Notes
/* The constexpr keyword in C++ is used to declare that the value of a variable, the return value of a function, 
or the value of an object can be evaluated at compile-time. This means that these values are constant and can be 
used where C++ requires compile-time constants, such as array sizes, template arguments, and evaluating constant expressions. 
This often results in more performant and error-checked code.
*/