#include <iostream>
using namespace std;

void swapMethod1(int a, int b, int c)
{
    a = a + b + c;   // 60
    b = a - (b + c); // 10
    c = a - (b + c); // 20
    a = a - (b + c); // 30

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
void swapMethod2(int a, int b, int c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
int main()
{
    int a = 10, b = 20, c = 30;

    swapMethod1(a, b, c);
    cout << endl;
    swapMethod2(a, b, c);
    return 0;
}