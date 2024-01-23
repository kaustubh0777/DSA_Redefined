#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, in;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    int w = 0, r = 1;

    while (r < n)
    {
        if (v[w] != v[r])
        {
           w++;
           v[w]=v[r];
           r++;
        }
        else if(v[w]==v[r])
        {
            r++; 
        }
    }
    for(int i=0;i<=w;i++)
    {
        cout<<v[i]<<" ";
    }
}