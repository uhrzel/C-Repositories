#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int factorial = 1;

    for (int x = 1; x <= n; x++)
    {
        factorial = factorial * x;
    }
    cout << "factorial of " << n << " is: " << factorial << endl;
}