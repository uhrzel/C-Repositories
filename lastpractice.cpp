#include <stdio.h>

int max(int a, int b, int c, int d)
{
    int maxx = a;

    if (b > maxx)
    {
        maxx = b;
    }
    if (c > maxx)
    {
        maxx = c;
    }
    if (d > maxx)
    {
        maxx = d;
    }
    return maxx;
}
int main()
{
    int res = max(250, 1000, 30, 8000);
    printf("%d", res);
}