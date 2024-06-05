#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    int arr[n];
    int size = sizeof(arr) / sizeof(int);
    cout << "Enter the prices of " << n << " items: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {

            min = arr[i];
        }
    }
    cout << "Minimum price among all items: " << min;
    return 0;
}