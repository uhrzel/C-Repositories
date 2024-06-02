#include <iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int sizearr1, int sizearr2)
{
    int mergesize = sizearr1 + sizearr2;

    int mergeArray[mergesize];

    for (int x = 0; x < sizearr1; x++)
    {
        mergeArray[x] = arr1[x];
    }

    for (int j = 0; j < sizearr2; j++)
    {
        mergeArray[j + sizearr1] = arr2[j];
    }

    for (int i = 0; i < mergesize; i++)
    {
        cout << mergeArray[i] << " ";
    }
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    int sizearr1 = sizeof(array1) / sizeof(int);
    int sizearr2 = sizeof(array1) / sizeof(int);

    mergeArray(array1, array2, sizearr1, sizearr2);

    return 0;
}