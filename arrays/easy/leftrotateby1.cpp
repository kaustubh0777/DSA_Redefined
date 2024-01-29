#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, in;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    int d = v[0];

    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i];
    }

    v[n - 1] = d;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}