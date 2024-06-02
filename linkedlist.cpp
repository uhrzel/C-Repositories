#include <iostream>
using namespace std;

struct dict
{
    int val = 0;
    dict *next;
};

int main()
{
    dict *first = new dict();
    dict *second = new dict();
    dict *third = new dict();

    first->val = 1;
    second->val = 2;
    third->val = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    while (first != NULL)
    {
        cout << first->val << endl;
        first = first->next;
    }

    return 0;
}