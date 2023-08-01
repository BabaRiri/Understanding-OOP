#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printString(string s)
{
    int num = 30;

    cout << setw(num) << "STRING: " << s << endl;
    cout << endl;
    cout << setw(num) << "IS IT EMPTY?: " << (s.empty() ? "Yes" : "No") << endl;
    cout << setw(num) << "LENGTH?: " << s.length() << endl;
    cout << setw(num) << "CAPACITY?: " << s.capacity() << endl;
}

void printMenu()
{
    int num = 30;

    cout << endl
         << "|-----------------------------------------------------------|" << endl;
    cout << "|                    STRING HANDLING PROGRAM                |" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
    cout << setw(num) << "1. "
         << "CREATE" << endl;
    cout << setw(num) << "2. "
         << "INSERT" << endl;
    cout << setw(num) << "3. "
         << "APPEND" << endl;
    cout << setw(num) << "4. "
         << "DELETE" << endl;
    cout << setw(num) << "5. "
         << "REVERSE" << endl;
    cout << setw(num) << "6. "
         << "PRINT" << endl;
    cout << setw(num) << "0. "
         << "QUIT" << endl;
    cout << "|-----------------------------------------------------------|" << endl;
}

int main()
{
    int num;
    string s0 = "DEFAULT STRING";
    string s4 = "SOURCE";

    printMenu();

    cout << "                ENTER A NUMBER FROM THE MENU:";

    while ((cin >> num) && (num != 0))
    {
        if ((num >= 0) && (num < 7))
        {
            switch (num)
            {
            case 0:
            {
                cout << "QUITTING..." << endl;
                break;
            }
            case 1:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "            WE CREATE A STRING & ASSIGNED IT 'SOURCE' " << endl
                     << endl;
                string s1 = "SOURCE";
                printString(s1);
                break;
            }
            case 2:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "      WE CAN INSERT A STRING 'CODE' TO STRING 'SOURCE' " << endl
                     << endl;
                char temp[] = " CODE";
                s4.insert(s4.length(), temp);
                printString(s4);
                break;
            }
            case 3:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "WE ADD 3 LETTERS FROM 'Metaverse' TO 'Google' FROM THE 4th INDEX" << endl
                     << endl;
                string a = "Google";
                string b = "Metaverse";
                a.append(b, 4, 3);
                printString(a);
                break;
            }
            case 4:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "                 WE DELETE THE DEFAULT STRING" << endl
                     << endl;
                printString(s0);
                s0.clear();
                cout << endl;
                printString(s0);
                break;
            }
            case 5:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "               WE PRINT THE REVERSE OF A STRING" << endl
                     << endl;
                printString(s4);
                cout << endl;
                cout << setw(27);

                for (string::reverse_iterator i = s4.rbegin(); i < s4.rend(); i++)
                {
                    cout << *i;
                }
                cout << endl;
                break;
            }
            case 6:
            {
                cout << "|-----------------------------------------------------------|" << endl;
                cout << "                     WE PRINT A STRING" << endl
                     << endl;
                string s3 = "NEW STRING";
                printString(s3);
                break;
            }
            }
        }
        else
        {
            cout << "                   INVALID CHOICE!";
        }

        printMenu();

        cout << "               ENTER A NUMBER FROM THE MENU: ";
    }

    return 0;
}
