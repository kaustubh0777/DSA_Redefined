#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "Enter the number " << endl;
    int n, i;
    cin >> n;

    cout << "Enter the ith bit number which you want to check" << endl;
    cin >> i;

    int new_n = 1 << (i - 1);

    int result = n & new_n;

    if (result)
    {
        cout << "Set" << endl;
    }
    else
    {
        cout << "Not Set" << endl;
    }
}