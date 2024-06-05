#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 3, 5, 2, 7, 9};

    int size = sizeof(arr) / sizeof(int);
    int max = 0;
    int secondMax = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
    }
    int solution = (max * secondMax);
    cout << "Maximum product of two integers: " << solution;

    return 0;
}