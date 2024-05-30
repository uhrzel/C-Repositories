#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 3, 2, 1, 5};

    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    int temp = 0;
    while (i < size)
    {
        int x = 0;
        while (x < size)
        {
            if (arr[x] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
            x++;
        }
        i++;
    }

    int newData = 0;

    while (newData < size)
    {
        cout << arr[newData] << endl;
        newData++;
    }

    return 0;
}