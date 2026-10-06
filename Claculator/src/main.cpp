#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    float num1, num2;
    char ch;
    int option;

    do
    {
        cout << "\nWelcome to the Calculator!\n";
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "\n1 -> Addition"
             << "\n2 -> Subtraction"
             << "\n3 -> Multiplication"
             << "\n4 -> Division"
             << "\n5 -> Modulo"
             << "\n";

        cin >> option;

        Calculator obj(num1, num2);

        switch (option)
        {
            case 1:
                obj.add();
                break;

            case 2:
                obj.subtract();
                break;

            case 3:
                obj.multiply();
                break;

            case 4:
                obj.divide();
                break;

            case 5:
                obj.modulo();
                break;

            default:
                cout << "Invalid option!" << endl;
                continue;
        }

        obj.display();

        cout << "Do you want to continue? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    cout << "Thank You!" << endl;

    return 0;
}
