#include <iostream>
#include "operatorOverloading.h"

using namespace std;

int main()
{
    int size, value, index, x;

    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|        OPERATOR OVERLOADING PROGRAM        |" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
    cout << "ENTER ARRAY SIZE: ";
    cin >> size;
    cout << endl;

    int *list = new int(size);

    cout << "ENTER " << size << " VALUES:" << endl;

    for (int i = 0; i < size; ++i)
    {
        cin >> list[i];
    }

    Array Arr1(list, size), Arr2, Arr3;

    cout << Arr1 << endl << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|          ARRAY OBJECT OPERATIONS           |" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1. CHANGE SIZE" << endl;
    cout << "2. IS EQUAL? ( == )" << endl;
    cout << "3. IS NOT EQUAL? ( != )" << endl;
    cout << "4. SUBSCRIPT - NON CONSTANT ( ARRAY[ index ] )" << endl;
    cout << "5. SUBSCRIPT - CONSTANT ( ARRAY[ index ] )" << endl;
    cout << "6. PARENTHESIS ( ARRAY( index, value ) )" << endl;
    cout << "7. PRE-INCREMENT ( ++size )" << endl;
    cout << "8. POST-INCREMENT ( size++ )" << endl;
    cout << "0. QUIT" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "ENTER A NUMBER FROM THE MENU: " << endl;

    while ( ( cin >> value ) && ( value != 0 ) )
    {
        switch ( value )
        {
            case 1:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|                CHANGE SIZE                 |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "ENTER A NEW SIZE:";
                cin >> size;
                Arr1.setSize(size);
                cout << Arr1;
                cout << endl;

                break;
            }

            case 2:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|               IS EQUAL?( == )              |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "/An identical object is created/" << endl;
                Arr2 = Arr1;
                cout << "ARE THE TWO OBJECTS EQUAL: ";
                cout << ( Arr1 == Arr2 ? "YES" : "NO" ) << endl;

                break;
            }

            case 3:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|             IS NOT EQUAL? ( != )           |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "/The same objects are compared again/" << endl;
                cout << "ARE THE TWO OBJECTS NOT EQUAL: ";
                cout << ( Arr1 != Arr2 ? "YES" : "NO" ) << endl;

                break;
            }

            case 4:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "| SUBSCRIPT - NON CONSTANT ( ARRAY[ index ] )|" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "Enter index to access:";
                cin >> index;
                if ( index < Arr1.getSize() )
                {
                    cout << "Value at index " << index << " is " << Arr1[index] << endl;
                }
                else
                {
                    cout << "INVALID INDEX" << endl;
                }

                break;
            }

            case 5:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|   SUBSCRIPT - CONSTANT ( ARRAY[ index ] )  |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "Enter index to access:";
                cin >> index;
                if ( index < Arr1.getSize() )
                {
                    cout << "Value at index " << index << " is " << Arr1[index] << endl;
                }
                else
                {
                    cout << "INVALID INDEX" << endl;
                }

                break;
            }

            case 6:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|    PARENTHESIS ( ARRAY( index, value ) )   |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "Enter index to change:";
                cin >> index;
                cout << "Enter a value:";
                cin >> x;

                Arr1.operator()( index, x );

                cout << Arr1 << endl;

                break;
            }

            case 7:
            {
                ++Arr1;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|         PRE-INCREMENT ( ++ARRAY )          |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "ARRAY after pre-increment" << endl;
                cout << Arr1 << endl;

                break;
            }

            case 8:
            {
                Arr1++;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|         POST-INCREMENT ( ARRAY++ )         |" << endl;
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "ARRAY after post-increment" << endl;
                cout << Arr1 << endl;

                break;
            }

            default:
            {
                cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "|               INVALID OPTION               |" << endl;

                break;
            }

        }

        cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "ENTER A NUMBER FROM THE MENU: " << endl;
    }

    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|                QUITTING....                |" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    return 0;
}
