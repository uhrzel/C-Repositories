#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int x = sizeof(arr) / sizeof(int); x != 0; x--)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[j];
        }
        cout << endl;
    }
    return 0;
}