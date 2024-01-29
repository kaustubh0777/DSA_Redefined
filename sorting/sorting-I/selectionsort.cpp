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
    int mindx;

    for(int i=0;i<n;i++)
    {
        mindx=i;
        for(int j=i;j<n;j++)
        {
            if(v[j]<v[mindx])
            {
                mindx=j;
            }
        }
        swap(v[i],v[mindx]);
    }
    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;
}