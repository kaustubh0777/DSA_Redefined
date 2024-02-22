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
void deletion(node*head)
{
    node*ptr=head;
    if(ptr->next==NULL)
    {
        return;
    }
    if(ptr->next->next==NULL)
    {
        ptr->next=NULL;
    }
    
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    node*pt=ptr->next;
    pt->prev=NULL;
    ptr->next=NULL;

    
}

int main()
{
    //Doubly Linked List Implementation
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);
    node*third=new node(40);

    head->next=first;
    head->prev=NULL;
    first->next=second;
    first->prev=head;
    second->next=third;
    second->prev=first;
    third->next=NULL;
    third->prev=second;

    cout<<"Before deletion "<<endl;
    display(head);
    cout<<"After Deletion"<<endl;
    deletion(head);
    display(head);
    

}