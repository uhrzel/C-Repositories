#include <iostream>
using namespace std;

struct Node
{
    int val = 0;
    Node *next;
};

int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->val = 1;
    second->val = 2;
    third->val = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    if (first->val == -1)
    {
        cout << "Null value mo" << endl;
    }
    else
    {
        while (first != NULL)
        {
            cout << first->val << endl;
            first = first->next;
        }
    }

    return 0;
}