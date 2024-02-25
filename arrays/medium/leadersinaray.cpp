#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int in, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    int leader;

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            leader = v[n - 1];
            cout << leader;
        }
        else
        {
            if (v[i] > leader)
            {
                leader = v[i];
                cout << leader;
            }
        }
    }
}