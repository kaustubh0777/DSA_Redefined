#include<bits/stdc++.h>
using namespace std;

void sortstack(stack<int>&s,int n)
{
  if(s.size()==n)
  {
    return;
  }
  int temp=s.top();
  s.pop();
  int temp1=s.top();
  if(s.size()>=0)
  {
    if(temp<temp1)
    {
      s.pop();
      s.push(temp);
      s.push(temp1);
    }

    
  }
  return 

}
int main()
{
  stack<int>s;
  int n,in;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    cin>>in;
    s.push(in);
  }
  sortstack(s,n);



}