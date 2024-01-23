#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num=n;
    int c=0;

    while(num)
    {
        num=num/10;
        c++;

    }
    cout<<"Number of digits = "<<c<<endl;
}