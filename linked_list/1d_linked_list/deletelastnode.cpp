#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void display(node *head)
{
    node *ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << " " << endl;
        ptr = ptr->next;
    }
}
node *deletenode(node *head)
{
    node *ptr = head;
    if (ptr->next == NULL)
    {
        return NULL;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;

    return head;
}
int main()
{
    node *head = new node(5);
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    node *new_node = deletenode(head);

    display(new_node);
}