#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int d;
    int s = 0;

    for (int i = n; i != 0; i = i / 10)
    {
        d = i % 10;
        s = s + (d * d * d);
    }
    
    if (s == n)
    {
        cout << "Armstrong Number " << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
}

// Time Complexity = O(log10(N))