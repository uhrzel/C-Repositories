#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> myCollection;

    myCollection.push("arzel");
    myCollection.push("john");
    myCollection.push("zolina");
    myCollection.pop();

    while (!myCollection.empty())
    {
        cout << myCollection.front() << " ";
        myCollection.pop();
    }

    return 0;
}