#include <iostream>
using namespace std;

int main()
{
    const int rows1 = 2;
    const int cols1 = 5;
    int arr1[rows1][cols1] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    const int rows2 = 2;
    const int cols2 = 5;
    int arr2[rows2][cols2] = {{11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};

    int size1 = rows1 + rows2;
    int size2 = cols2;

    int mergeArr[size1][size2];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            mergeArr[i][j] = arr1[i][j];
        }
    }

    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            mergeArr[i + rows1][j] = arr2[i][j];
        }
    }
    cout << "[";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << mergeArr[i][j] << " ";
        }
    }
    cout << "]";

    return 0;
}