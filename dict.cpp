#include <iostream>
using namespace std;

void passValue(int arr[], int n, int target)
{
    int temp1 = 0;
    int temp2 = 0;
    for (int i = 0; i < n; i++)
    {

        for (int x = 0; x < n; x++)
        {
            if (arr[x] + arr[i] == target && x != i)
            {
                temp1 = x;
                temp2 = i;
            }
        }
    }

    cout << temp1 << " " << temp2;
}
int main()
{

    int num, target;
    cout << "Enter target: ";
    cin >> target;
    cout << "Enter how many value to input: ";
    cin >> num;
    int arr[num];
    for (int x = 0; x < num; x++)
    {
        cout << "Enter number for index " << x + 1 << ": ";
        cin >> arr[x];
    }
    passValue(arr, num, target);

    return 0;
}