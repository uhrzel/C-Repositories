#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 0, 1, 2, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    int expectedSum = n * (n + 1) / 2;
    int sum = 0;
    for (int x = 0; x < n; x++)
    {
        sum += arr[x];
    }

    int sub = expectedSum - sum;
    cout << sub;

    return 0;
}