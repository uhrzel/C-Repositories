#include <iostream>
using namespace std;

int main()
{

    int array[5];

    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value at index[" << i + 1 << "]: ";
        cin >> array[i];
    }

    int indextoDelete;

    cout << "Enter index to delete: ";
    cin >> indextoDelete;

    for (int i = indextoDelete; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }

    array[size - 1] = 0;

    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}