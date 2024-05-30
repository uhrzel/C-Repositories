#include <iostream>
using namespace std;

int main()
{

    int inputYear = 0;
    cout << "Enter a year: ";
    cin >> inputYear;

    if (inputYear % 4 == 0)
    {
        cout << "Olympic Year";
    }
    else
    {
        cout << "Not Olympic Year";
    }
    return 0;
}