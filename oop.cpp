#include <iostream>
using namespace std;

class nums
{
private:
    int isNum1[5] = {1, 2, 3, 4, 5};
    int isNum2[5] = {6, 7, 8, 9, 10};

public:
    void print()
    {
        int isNum1Size = sizeof(isNum1) / sizeof(int);
        int isNum2Size = sizeof(isNum2) / sizeof(int);

        int sizeoftwoNums = isNum1Size + isNum2Size;

        int mergeNums[sizeoftwoNums];

        for (int i = 0; i < isNum1Size; i++)
        {
            mergeNums[i] = isNum1[i];
        }
        for (int j = 0; j < isNum2Size; j++)
        {
            mergeNums[j + isNum1Size] = isNum2[j];
        }
        int lastValue = mergeNums[sizeoftwoNums - 1];

        cout << "Merge Nums is: [";
        for (int x = 0; x < sizeoftwoNums - 1; x++)
        {
            cout << mergeNums[x] << ",";
        }
        cout << lastValue;
        cout << "]" << endl;
    }
};
int main()
{
    nums myobj;

    myobj.print();
}