#include <iostream>
using namespace std;

void strArray(string name, char strName[], int size)
{
    for (int x = 0; x < size; x++)
    {
        strName[x] = name[x];
    }
    strName[size] = '\0';
    for (int i = size; i >= 0; i--)
    {
        cout << strName[i] << " ";
    }
}

int main()
{
    string name = "Arzel";
    int size = name.length();

    char arrayName[5];

    strArray(name, arrayName, size);
    return 0;
}