#include <iostream>
using namespace std;

void findIndex(int arr[], int size, int target)
{
    int negative = -1;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            temp = i;
        }
        else
        {
            temp = -1;
        }
    }

    cout << temp << endl;
}
int main()
{
    int arr[] = {1, 2, 4, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    int target = 9;

    findIndex(arr, size, target);
    return 0;
}