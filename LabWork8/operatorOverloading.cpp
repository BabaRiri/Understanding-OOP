#include "operatorOverloading.h"

ostream& operator<<( ostream& out, const Array& right )
{
    out << "SIZE: " << right.size << endl;
    out << "DATA: ";

    for (int i = 0; i < right.size; ++i)
    {
        out << right.list[i];
        out << "  ";
    }

    return out;
}

istream& operator>>( istream& in, Array& right )
{
    for (int i = 0; i < right.size; ++i)
    {
        in >> right.list[i];
    }

    return in;
}

Array::Array()
{
    size = 0;
    list = new int(size);
}

Array::Array( const int *_list, int size )
{
    this->size = size;
    this->list = new int[size];

    for(int i = 0; i< size; ++i)
    {
        list[i] = _list[i];
    }
}
Array::Array( const Array& Array )
{
    this->size = Array.size;
    this->list = new int[size];

    for(int i=0;i<Array.size;++i)
    {
        list[i] = Array.list[i];
    }
}

Array::~Array()
{
    for(int i = 0; i < this->size; ++i)
    {
        delete(&list[i]);
    }
}

int Array::getSize() const
{
    return size;
}

void Array::setSize( int s )
{
    size = s;
}

bool Array::operator==( const Array& right ) const
{
    if( this->size != right.size )
    {
        return false;
    }
    for( int i = 0; i < right.size; ++i )
    {
        if( list[i] != right.list[i] )
        {
            return false;
        }
    }

    return true;
}

bool Array::operator!=( const Array& right ) const
{
    if( this->size != right.size )
    {
        return true;
    }

    for(int i = 0; i < right.size;++i )
    {
        if( list[i] != right.list[i] )
        {
            return true;
        }
    }

    return false;
}

int& Array::operator[]( int i )
{
    return list[i];
}

int Array::operator[]( int i ) const
{
    return list[i];
}

void Array::operator()( int i, int x )
{
    list[i] = x;
}

Array Array::operator++()
{
    Array a;
    a.size= size;
    a.list= new int[size];

    for(int i=0;i< size;++i)
    {
        a.list[i]= ++list[i];
    }

    return a;
}

Array Array::operator++( int )
{
    Array a;
    a.size= size;
    a.list= new int[size];

    for(int i=0;i<size;++i)
    {
        a.list[i]= list[i]++;
    }

    return a;
}