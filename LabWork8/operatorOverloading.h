#ifndef LABWORK8_OPERATOROVERLOADING_H
#define LABWORK8_OPERATOROVERLOADING_H

#include <iostream>

using namespace std;

class Array {
    friend ostream& operator<< ( ostream&, const Array& ); //overload “stream insertion” operator
    friend istream& operator>> ( istream&, Array& ); //overload “stream extraction” operator
public:
    Array(); //default constructor
    Array( const int*, int ); //parameterized constructor
    Array( const Array& ); //copy constructor
    ~ Array(); //destructor
    int getSize() const; //a constant member function
    void setSize( int ); //a non-constant member function
    bool operator==( const Array& ) const; //overload “is equal” operator
    bool operator!=( const Array& ) const; //overload “is not equal” operator
    int& operator[]( int ); //overload “subscript” operator as a non-constant l-value
    int operator[]( int ) const; //overload “subscript” operator as a constant r-value
    void operator()( int, int ); //overload “parenthesis” operator (passing index and value to be stored)
    Array operator++(); //overload “pre-increment” operator
    Array operator++(int ); //overload “post-increment” operator

private:
    int *list;
    int size;
};

#endif //LABWORK8_OPERATOROVERLOADING_H
