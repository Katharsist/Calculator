#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    double a, b;
    int choice;

    cout << "Welcome to Calculator" << endl;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Select an action: \n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\nYour choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition:\n" << a << " + " << b << " = " << Addition(a,b) << endl;
        break;
    case 2:
        cout << "Function in development" << endl;
        break;
    case 3:
        cout << "Function in development" << endl;
        break;
    case 4:
        cout << "Function in development" << endl;
        break;
    default:
        cout << "Error. Wrong choice!" << endl;
    }

    system("pause");
    return 0;
}
