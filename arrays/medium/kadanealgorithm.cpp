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

    int sum1=INT_MIN;
    int sum=0;

    for(int i=0;i<n;i++ )
    {
        sum=sum+v[i];

        if(sum>sum1)
        {
            sum1=sum;
        }

        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Maximum sum of an subarray = "<<sum1<<endl;
}