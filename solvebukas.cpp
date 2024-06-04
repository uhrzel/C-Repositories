#include <iostream>
using namespace std;

int main()
{

    string str = "arzel";

    char strArray[5];

    int size = str.length();

    for (int x = 0; x < size; x++)
    {

        strArray[x] = str[x];
    }

    strArray[size] = '\0';

    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (strArray[j] < strArray[i])
            {
                temp = strArray[i];
                strArray[i] = strArray[j];
                strArray[j] = temp;
            }
        }
    }

    for (int c = 0; c < size; c++)
    {
        cout << strArray[c] << " ";
    }

    return 0;
}