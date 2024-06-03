#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 9};
    int max = 0;
    for (int x = 0; x < 5; x++)
    {
        if (arr[x] > max)
        {
            max = arr[x];
        }
    }
    cout << max << endl;

    return 0;
}