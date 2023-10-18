#include <stdio.h>

int binarySearch(int arr[], int start, int end, int target)
{

    if (start > end)
        return -1;

    int midIndex = (start + end) / 2;
    int midElement = arr[midIndex];

    if (target == midElement)
        return midIndex;
    if (target < midElement)
    {
        return binarySearch(arr, start, midIndex - 1, target);
    }
    else
    {
        return binarySearch(arr, midIndex + 1, end, target);
    }
}

int main()
{
    int sortedArray[] = {1, 5, 4, 8, 7, 9, 10, 23, 45, 56, 69, 10000};
    int result = binarySearch(sortedArray, 0, 12, 10000);
    (result == -1) ? printf("Element not found in the array") : printf("Element found in the index: %d", result);
}