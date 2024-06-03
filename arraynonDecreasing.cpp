#include <iostream>
using namespace std;

bool checkArray(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 4, 7, 9, 1};
    int size = sizeof(arr) / sizeof(int);

    bool isDescreasing = checkArray(arr, size);

    if (isDescreasing)
    {
        cout << "array is non decreasing order" << endl;
    }
    else
    {
        cout << "array is not a non decreasing order" << endl;
    }

    return 0;
}