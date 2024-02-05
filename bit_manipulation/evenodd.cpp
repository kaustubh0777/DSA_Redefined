#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    int n;
    cin>>n;

    // Applying brian kerningham algo to count the set bits

    while(n)
    {
        n=n&(n-1);
        c++;

    }
    if(c==1)
    {
        cout<<"That's an even "<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}