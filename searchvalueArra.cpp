#include <iostream>
using namespace std;

string retval(string array[], int size, string valueSearch)
{
    string temp;
    for (int x = 0; x < size; x++)
    {
        if (array[x] == valueSearch)
        {
            temp = array[x];
        }
    }

    return temp == valueSearch ? "Tama " : "Mali";
}

int main()
{

    string array[5];

    int size = sizeof(array) / sizeof(string);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value at index[" << i + 1 << "]: ";
        cin >> array[i];
    }

    string valuetoSearch;

    cout << "Enter value to search: ";
    cin >> valuetoSearch;

    string retValueString = retval(array, size, valuetoSearch);

    cout << retValueString;

    return 0;
}