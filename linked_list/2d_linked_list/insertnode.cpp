#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*next=NULL;
    node*prev=NULL;

    node(int x)
    {
        data=x;
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
    cout<<endl;
}
void insert_at_end(node*head,int data)
{
    node*ptr=head;
    node*add=new node(data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=add;
    add->next=NULL;
    add->prev=ptr;

}

int main()
{
    //Doubly Linked List Implementation
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);

    head->next=first;
    head->prev=NULL;
    first->next=second;
    first->prev=head;
    second->next=NULL;
    second->prev=first;

    cout<<"Before Insertion "<<endl;
    display(head);
    cout<<"Enter the data "<<endl;
    int n;cin>>n;
    cout<<"After Insertion "<<endl;
    insert_at_end(head,n);
    display(head);
    

}