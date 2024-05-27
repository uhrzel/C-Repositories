#include <iostream>
using namespace std;
int main()
{
    string firstName, lastName, homeAddress;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter home address: ";
    cin >> homeAddress;

    cout << "Hi! My name is " << firstName << lastName << endl;
    cout << "I am from " << homeAddress << endl;

    return 0;
}
