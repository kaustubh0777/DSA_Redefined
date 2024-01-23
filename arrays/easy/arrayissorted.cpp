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
    int f = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i + 1 < v.size())
        {
            if (v[i] > v[i + 1])
            {
                f = 1;
                break;
            }
        }
    }
    
    if(f==1)
    {
        cout<<"Unsorted"<<endl;
    }
    else{
        cout<<"Sorted"<<endl;
    }
}