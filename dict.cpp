#include <iostream>
using namespace std;

void passValue(int array[], int target, int sz)
{
    int index1 = 0;
    int index2 = 0;

    for (int a = 0; a < sz; a++)
    {
        for (int b = 0; b < sz; b++)
        {
            if (array[b] + array[a] == target && b != a)
            {
                index1 = b;
                index2 = a;
            }
        }
    }

    std::printf("[%d] [%d]", index1, index2);
}

int main()
{

    int array[] = {2, 3, 44, 5, 1};

    int target = 98;

    int size = sizeof(array) / sizeof(int);

    passValue(array, target, size);

    return 0;
}