#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> myCollection;

    myCollection.push("arzel");
    myCollection.push("john");
    myCollection.push("zolina");

    while (!myCollection.empty())
    {
        cout << myCollection.top() << " ";
        myCollection.pop();
    }

    return 0;
}