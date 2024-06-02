#include <iostream>
using namespace std;

int main()
{
    char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    /*     char strletter[] = "abcde"; */

    for (int x = 0; str[x] != '\0'; x++)
    {
        cout << str[x];
    }
    return 0;
}