#include <stdio.h>
void getArrayElement(int target)
{
    int arr[] = {28, 44, 56, 205, 327};
    int size = sizeof(arr) / sizeof(int);
    int temp1 = 0, temp2 = 0;
    for (int x = 0; x < size; x++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[x] + arr[j] == target && j != x)
            {
                temp1 = j;
                temp2 = x;
            }
        }
    }
    printf("%d %d", temp1, temp2);
}
int main()
{
    int given_nums[] = {2, 8, 10, 23, 57};
    int sz = sizeof(given_nums) / sizeof(int);
    int sum = 0;
    for (int x = 0; x < sz; x++)
    {
        sum += given_nums[x];
    }

    int target = sum;

    getArrayElement(target);
}