#include <iostream>
using namespace std;

void numsArray(int array[], int n)
{
    for (int x = 0; x < n; x++)
    {
        cin >> array[x];
    }
    for (int x = n - 1; x >= 0; x--)
    {
        cout << array[x] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int nums[n];
    numsArray(nums, n);

    return 0;
}