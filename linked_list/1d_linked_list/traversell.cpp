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

void display(node*head)
{
    node*ptr=head;

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);

    head->next=first;
    first->next=second;
    second->next=NULL;

    display(head);

}