#include <iostream>
using namespace std;

void numsArray(int array[], int n)
{
    for (int x = 0; x < n; x++)
    {
        cin >> array[x];
    }
    int secondMaxValue = 0;
    int max = 0;
    for (int x = 0; x < n; x++)
    {
        if (array[x] > max)
        {
            secondMaxValue = max;
            max = array[x];
        }
    }
    cout << secondMaxValue << endl;
}

int main()
{
    int n;
    cin >> n;

    int nums[n];
    numsArray(nums, n);

    return 0;
}