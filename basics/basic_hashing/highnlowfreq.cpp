#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, in;
    cin >> n;
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    int highf = INT_MIN;
    int lowf = INT_MAX;

    for (auto i : m)
    {
        if (i.second > highf)
        {
            highf = i.first;
        }
        if (i.second < lowf)
        {
            lowf = i.first;
        }
    }
    cout << "The highest frequency element is = " << highf << endl;
    cout << "The lowest frequency element is = " << lowf << endl;
}