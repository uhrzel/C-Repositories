#include <iostream>
using namespace std;

int main()
{
    string str[] = {"arzel", "b", "c"};

    int size = sizeof(str) / sizeof(string);

    for (int x = 0; x < size; x++)
    {
        cout << str[x];
    }
    return 0;
}