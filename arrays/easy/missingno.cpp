#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
    cin>>in;
    v.push_back(in);
    }

    int nsum= (n*(n+1))/2;

    int sum=0;

    for(int i=0;i<n-1;i++)
    {
        sum+=v[i];
    }

    cout<<"Missing Number is "<<nsum-sum<<endl;
}