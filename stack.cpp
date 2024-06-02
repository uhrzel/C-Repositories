#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> myCollection;

    myCollection.push("arzel");
    myCollection.push("john");
    myCollection.push("zolina");
    myCollection.pop();
    myCollection.pop();
    myCollection.pop();

    if (!myCollection.empty())
    {
        cout << "Top element is:" << myCollection.top() << endl;
    }
    return 0;
}