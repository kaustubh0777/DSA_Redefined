#include<bits/stdc++.h>
using namespace std;

void check(string &st,int low,int high)
{
    if(low<high)
    {
        swap(st[low],st[high]);
        check(st,low+1,high-1);
    }
}
int main()
{
    string s;
    cin>>s;


    int low=0;
    int high = s.length()-1;

    string st=s;

    check(st,low,high);
    if(st==s)
    {
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
}