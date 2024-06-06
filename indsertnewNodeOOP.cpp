#include <iostream>
using namespace std;

class Node
{
public:
    int value = 0;
    Node *next = nullptr;
};

void printList(Node *head)
{
    cout << "[";
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "]";
}
void insertNewnode(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = *head;
    *head = newNode;
}

int main()
{

    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->value = 1;
    second->value = 2;
    third->value = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    insertNewnode(&first, 5);
    printList(first);
}