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

int count(node*head)
{
    node*ptr=head;
    int c=0;

    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    return c;
}

int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);

    head->next=first;
    first->next=second;
    second->next=NULL;

    int ans = count(head);

    cout<<"The Length of the Linked List "<<ans<<endl;

}