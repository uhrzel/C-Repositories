#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}