#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }
    
    sort(v.begin(),v.end());
    int res=v[0];

    for(int i=1;i<n;i++)
    {
        res=res^v[i];
    }
    cout<<res<<endl;
}