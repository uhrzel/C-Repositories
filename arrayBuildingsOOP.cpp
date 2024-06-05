#include <iostream>
using namespace std;

class myProblem
{
private:
    int n;
    int *arr;

public:
    void solution()
    {
        cout << "Enter the number of buildings: ";
        cin >> n;

        arr = new int[n];

        cout << "Enter the heights of " << n << " buildings: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int area = 0;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            area = arr[i] * 1;
            total += area;
        }
        cout << total;
    }
};

int main()
{
    myProblem obj;
    obj.solution();
    return 0;
}