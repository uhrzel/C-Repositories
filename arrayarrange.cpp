#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size = sizeof(arr) / sizeof(int);

    int newArray[size];

    int evenNums = 0;
    int oddNums = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            newArray[evenNums++] = arr[i];
        }
        else
        {
            newArray[oddNums--] = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << newArray[i] << " ";
    }

    return 0;
}