#include <iostream>

using namespace std;

int main()
{
    int a = 10, c = 20, e = 30, g = 40, i = 50;
    int b = 1, d = 2, f = 3, h = 4, j = 5;

    a = ((b * i / j) + a);
    b = (a - (j * b) + i);
    i = (i * a + (b * j));
    j = ((i % 2) + (j - b) * a);
    cout << a << endl;
    cout << b << endl;
    cout << i << endl;
    cout << j << endl;

    return 0;
}