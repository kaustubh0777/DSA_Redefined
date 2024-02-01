#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&v,int n)
{
    if(n==1)
    {
        return;
    }
    // because the n-1th element would be sorted eventually
    for(int i=0;i<=n-2;i++)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
        }

    }
    bubblesort(v,n-1);

}


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

    bubblesort(v,n);

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;


}