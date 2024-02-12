#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4
void reversestack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reversestack(s);
    s.push(temp);
}
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reversestack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}