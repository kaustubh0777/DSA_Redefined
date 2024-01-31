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

bool check(node *head, int x)
{
    node *ptr = head;

    while (ptr != NULL)
    {
        if (ptr->data == x)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);

    head->next = first;
    first->next = second;
    second->next = NULL;

    cout << "Enter the value to be searched" << endl;
    int x;
    cin >> x;

    if(check(head,x))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}