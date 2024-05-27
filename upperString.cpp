#include <stdio.h>

int main()
{
    int temp = 0;
    int arr[] = {3, 2, 1, 4, 5};

    for (int x = 0; x <= 5; x++)
    {
        for (int i = 0; i <= 5; i++)
        {
            if (arr[x] <= arr[i])
            {
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
    }

    for (int x = 0; x < 5; x++)
    {

        if (x == 5 - 1)
        {
            printf("%d", arr[x]);
        }
        else
        {
            printf("%d, ", arr[x]);
        }
    }
    return 0;
}
