#include <iostream>
using namespace std;

class myProblem
{
private:
    int *arr1;
    int *arr2;
    int sizeArr1;
    int sizeArr2;
    int sizeMergeArr;
    int *mergeArray;
    int temp;

public:
    void solution()
    {
        cout << "Enter the size of array1: ";
        cin >> sizeArr1;
        arr1 = new int[sizeArr1];
        cout << "Enter the elements of array1: ";
        for (int j = 0; j < sizeArr1; j++)
        {
            cin >> arr1[j];
        }

        cout << "Enter the size of array2: ";
        cin >> sizeArr2;
        arr2 = new int[sizeArr2];
        cout << "Enter the elements of array2: ";
        for (int j = 0; j < sizeArr2; j++)
        {
            cin >> arr2[j];
        }

        sizeMergeArr = sizeArr1 + sizeArr2;

        mergeArray = new int[sizeMergeArr];

        for (int i = 0; i < sizeArr1; i++)
        {
            mergeArray[i] = arr1[i];
        }
        for (int x = 0; x < sizeArr2; x++)
        {
            mergeArray[x + sizeArr1] = arr2[x];
        }
        for (int c = 0; c < sizeMergeArr; c++)
        {
            for (int x = 0; x < sizeMergeArr; x++)
            {
                if (mergeArray[c] < mergeArray[x])
                {
                    temp = mergeArray[x];
                    mergeArray[x] = mergeArray[c];
                    mergeArray[c] = temp;
                }
            }
        }
        cout << "Merged sorted array: ";
        for (int i = 0; i < sizeMergeArr; i++)
        {
            cout << mergeArray[i] << " ";
        }
    }
};
int main()
{
    myProblem obj;
    obj.solution();
}