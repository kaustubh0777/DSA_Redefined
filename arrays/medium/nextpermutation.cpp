#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> v;
    int n, in;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    int ind=-1;//breakpoint

    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        {
            ind=i; // as soon as you find the  breakpoint just break the loop
            break;

        }
    }
    if(ind!=-1)
    {
        for(int i=n-1;i>ind;i--)
        {
            if(v[i]>v[ind])
            {
                swap(v[i],v[ind]);
                break;
            }
        }
        reverse(v.begin()+ind+1,v.end());

    }
    else{
        reverse(v.begin(),v.end()); // in case you didn't find the breakpoint
    }

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
    cout<<endl;

}