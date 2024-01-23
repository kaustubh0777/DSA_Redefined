#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    // Base condition
    if(n<0)
    {
        return;
    }
    print(n-1);
    cout<<n<<endl;

}
int main()
{
    int n;
    cin>>n;

    print(n);


}