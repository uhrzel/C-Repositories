#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Type a number: ";
    cin >> n;

    // Print the pattern
    for (int i = 1; i <= n; i++)
    {
        cout << "+";
        for (int j = 1; j < i; j++)
        {
            if (i == j + 1)
            {
                cout << "+";
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << "+";
    }
    cout << endl;

    return 0;
}
