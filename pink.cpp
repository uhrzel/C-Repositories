#include <stdio.h>

int main()
{
    int array[] = {100, 21, 64, 356, 764, 879};

    int n;
    scanf("%d", &n);

    int firstDigit;
    int lastDigit = n % 10;
    
    while (firstDigit >= 10)
    {
        firstDigit = n /= 10;
    }

    if (lastDigit <= 5)
    {
        for (int x = firstDigit; x <= array[lastDigit]; x++)
        {
            printf("%d ", x);
        }
    }
    else
    {
        printf("Error");
    }
}