#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n,in;
    cin>>n;

    int lar=0;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        arr.push_back(in);
    }

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }

    }

    cout<<"Largest Element in the Array "<<lar<<endl;


}