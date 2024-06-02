#include <iostream>
using namespace std;

void mergeArray(string arr1[], string arr2[], int sizearr1, int sizearr2)
{
    int mergesize = sizearr1 + sizearr2;

    string mergeArray[mergesize];

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
    string array1[] = {"Arzel", "John", "Mark", "Lloyd", "Jonathan"};
    string array2[] = {"Rose", "Marry", "Joyce", "Hannah", "Lady"};

    int sizearr1 = sizeof(array1) / sizeof(string);
    int sizearr2 = sizeof(array1) / sizeof(string);

    mergeArray(array1, array2, sizearr1, sizearr2);

    return 0;
}