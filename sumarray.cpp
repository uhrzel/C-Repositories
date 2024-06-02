#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "How many values do you have to enter: ";
    cin >> number;

    int arr[number];
    int sum = 0;

    for (int x = 0; x < number; x++)
    {
        cout << "Enter value for index[" << x + 1 << "]: ";
        cin >> arr[x];
    }

    for (int x = 0; x < number; x++)
    {
        sum += arr[x];
    }

    cout << sum << endl;
    return 0;
}