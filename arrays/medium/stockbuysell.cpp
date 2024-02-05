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

    int minp=INT_MAX;
    int maxpro=INT_MIN;


    for(int i=0;i<n;i++)
    {
        minp=min(v[i],minp);
        maxpro=max(maxpro,v[i]-minp);

    }

    cout<<"Maximum Profit "<<maxpro<<endl;
}