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

    cout<<"Bubble Sorting"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }
    cout<<"After Bubble Sorting"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}