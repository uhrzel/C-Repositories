#include <iostream>
using namespace std;

int main()
{

    int range = 10;

    for (int x = 0; x <= range; x++)
    {
        for (int i = 0; i <= x; i++)
        {
            if (i == 0 || i == x || x == range)
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

    return 0;
}