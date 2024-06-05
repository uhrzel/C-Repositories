#include <iostream>
using namespace std;
int main()
{
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int size = sizeof(letters) / sizeof(char);

    string name = "arzel ";

    string output = "";

    int sizeofName = name.length();

    for (int x = 0; x < size; x++)
    {
        bool found = false;
        for (int i = 0; i < sizeofName; i++)
        {

            if (letters[x] == name[i])
            {
                found = true;
            }
        }
        if (!found)
        {
            output += letters[x];
        }
    }

    cout << output << " ";

    return 0;
}