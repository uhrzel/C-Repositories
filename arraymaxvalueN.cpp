#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int nums[n];
    for (int x = 0; x < n; x++)
    {
        cin >> nums[x];
    }

    int maxValue = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxValue)
        {
            maxValue = nums[i];
        }
    }
    cout << maxValue;
    return 0;
}