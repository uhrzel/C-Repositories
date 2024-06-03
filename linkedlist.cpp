#include <iostream>
using namespace std;

struct dict
{
    int val = 0;
    dict *next;
};
struct node
{
    int value = 0;
    node *next;
};

int main()
{
    dict *first = new dict();
    dict *second = new dict();
    dict *third = new dict();

    node *one = new node();
    node *two = new node();
    node *three = new node();

    first->val = 1;
    second->val = 2;
    third->val = 3;

    one->value = 1;
    two->value = 2;
    three->value = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    one->next = two;
    two->next = three;
    three->next = NULL;

    while (first != NULL && one != NULL)
    {
        cout << first->val << " ";
        first = first->next;
    }
    while (one != NULL)
    {
        cout << one->value << " ";
        one = one->next;
    }

    return 0;
}