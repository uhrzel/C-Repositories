#include <iostream>
using namespace std;

void add()
{
    int a, b;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl;
}

void sub()
{
    int a, b;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;

    cout << a << " - " << b << " = " << a - b << endl;
}

void multiply()
{
    int a, b;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;

    cout << a << " * " << b << " = " << a * b << endl;
}

void div()
{
    int a, b;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;

    cout << a << " / " << b << " = " << a / b << endl;
}

int main()
{
    int choices;
    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choices (1-4): ";
        cin >> choices;

        if (choices == 1)
        {
            add();
        }
        else if (choices == 2)
        {
            sub();
        }
        else if (choices == 3)
        {
            multiply();
        }
        else if (choices == 4)
        {
            div();
        }
        else
        {
            cout << "Invalid choice" << endl;
        }

    } while (choices != 5);

    return 0;
}