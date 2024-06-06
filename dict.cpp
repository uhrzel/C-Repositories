#include <iostream>

using namespace std;

class myprobelm
{
private:
    char *arr;
    int size;

public:
    void solution()
    {
        cin >> size;
        arr = new char[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        char target = 'a';
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                found = true;
            }
        }
        if (found)
        {
            cout << "Found";
        }
        else
        {
            cout << "Not Found";
        }
    }
};

int main()
{
    myprobelm obj;
    obj.solution();
    return 0;
}