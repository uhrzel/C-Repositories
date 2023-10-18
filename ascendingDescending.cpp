#include <stdio.h>

void ascending(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int x = 0; x < size; x++)
    {
        printf("%d ", arr[x]);
    }
}

void descending(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int x = 0; x < size; x++)
    {
        printf("%d ", arr[x]);
    }
}
int main()
{
    int arr[] = {5, 4, 6, 2, 0, 7};
    int sz = sizeof(arr) / sizeof(int);
    ascending(arr, sz);
    printf("\n");
    descending(arr, sz);
}