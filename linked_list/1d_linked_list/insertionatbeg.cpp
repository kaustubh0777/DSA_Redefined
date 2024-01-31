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
        cout << ptr->data << " "<<endl;
        ptr = ptr->next;
    }
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

    cout << "Enter the data that you want to insert at the end" << endl;
    int d;
    cin >> d;

    cout << "Before insertion " << endl;
    display(head);

    node *new_node = new node(d);

    new_node->next = head;

    cout << "After insertion " << endl;
    display(new_node);
}