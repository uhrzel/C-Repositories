#include <iostream>
using namespace std;
int main()
{
    const int row = 3;
    const int cols = 3;
    int arr[row][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int temp = 0;

    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}