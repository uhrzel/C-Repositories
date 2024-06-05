#include <iostream>
void strArray(std::string name, char strName[], int size)
{
    for (int x = 0; x < size; x++)
    {
        strName[x] = name[x];
    }
    strName[size] = '\0';
    for (int i = size; i >= 0; i--)
    {
        std::cout << strName[i] << std::endl;
    }
}

int main()
{
    std::string name = "Arzel";
    int size = name.length();

    char arrayName[5];

    strArray(name, arrayName, size);
    return 0;
}