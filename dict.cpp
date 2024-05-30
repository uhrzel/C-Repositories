#include <iostream>
using namespace std;

int main()
{

    int grade = 0;

    cout << "grade: " << endl;
    cin >> grade;

    if (grade >= 90)
    {
        cout << "Smart" << endl;
    }
    else if (grade > 80)

    {
        cout << "Excellent" << endl;
    }
    else if (grade > 70)
    {
        cout << "Passed" << endl;
    }

    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}