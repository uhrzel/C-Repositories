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
void insertNewnodeFirst(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = *head;
    *head = newNode;
}
void insertNewnodeLast(Node **head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head == newNode;
        return;
    }
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
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

    insertNewnodeFirst(&first, 10);
    insertNewnodeLast(&first, 10);
    printList(first);
}