#include <iostream>
using namespace std;

class findMax
{
private:
    int n;
    int *arr;

public:
    void solveProblem()
    {

        cout << "Enter the size of the array: ";
        cin >> n;

        arr = new int[n];
        cout << "Enter " << n << " integers: ";

        for (int x = 0; x < n; x++)
        {
            cin >> arr[x];
        }
        int maxValue = arr[0];
        for (int x = 0; x < n; x++)
        {
            if (arr[x] > maxValue)
            {
                maxValue = arr[x];
            }
        }
        cout << "Maximum element: " << maxValue << endl;
    }
};
int main()
{
    findMax obj;
    obj.solveProblem();

    return 0;
}