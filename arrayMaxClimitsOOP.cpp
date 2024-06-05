#include <iostream>
#include <climits>
using namespace std;

class myProblem
{
private:
    int *arr;
    int size;

public:
    void solution()
    {
        arr = new int[5]{1, 2, 3, 4, 5};
        size = 5;
        int maxValue = arr[0];

        for (int x = 0; x < size; x++)
        {
            maxValue = max(maxValue, arr[x]);
        }
        cout << maxValue;
    }
};

int main()
{
    myProblem obj;
    obj.solution();
}
