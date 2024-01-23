// print your name 'n' times

#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i == n)
    {
        return;
    }
    cout<<"Kaustubh"<<endl;
    print(i+1,n);
}
int main()
{
    int n;
    cin >> n;

    int i = 0;

    print(i, n);
}