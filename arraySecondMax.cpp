#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int max = 0;
    int secondMax = 0;
    for (int x = 0; x < size; x++)
    {
        if (arr[x] > max)
        {
            secondMax = max;
            max = arr[x];
        }
    }
    cout << max << endl;
    cout << secondMax << endl;
    return 0;
}