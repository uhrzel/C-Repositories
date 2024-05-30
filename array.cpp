#include <iostream>
using namespace std;

int main()
{
    int array[5];
    int num;

    for (int x = 0; x < 5; x++)
    {
        cout << "Enter number: ";
        cin >> array[x];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
