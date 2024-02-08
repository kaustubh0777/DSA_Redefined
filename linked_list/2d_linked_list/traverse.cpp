#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void displayforward(node*head)
{
    node*ptr=head;
    cout<<"Traversing forward"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;

}
void displaybackward(node*head)
{
    node*ptr=head;
    cout<<"Traversing backward"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;
    
}

int main()
{
    node*head=new node(5);
    node*first =new node(10);
    node*second=new node(20);

    head->next=first;
    first->next=second;
    second->next=NULL;

    head->prev=NULL;
    first->prev=head;
    second->prev=first;

    displayforward(head);
    displaybackward(second);
}