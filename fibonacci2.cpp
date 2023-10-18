#include <stdio.h>

int main()
{
    int temp, a = 0, b = 1;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            temp = i;
        }
        else
        {
            temp = a + b;
            b = a;
            a = temp;
        }
        printf("%d ", temp);
    }
}