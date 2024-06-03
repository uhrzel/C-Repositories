#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(int);

    int countEven = 0;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] % 2 == 0)
        {
            countEven++;
        }
    }

    cout << "Even: " << countEven << endl;

    return 0;
}