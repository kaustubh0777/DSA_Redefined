#include<bits/stdc++.h>
using namespace std;

void print(string s,string &f,int i)
{
    if(i>=s.length())
    {
        cout<<f<<endl;
        return;
    }
    f+=s[i];//take
    print(s,f,i+1);
    f.pop_back();//not take
    print(s,f,i+1);
}
int main()
{
    string s;
    cin>>s;

    string f="";

    print(s,f,0);


}