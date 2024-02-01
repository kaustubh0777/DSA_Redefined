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
    map<int, int> m;

    int k = n / 2;

    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    int maj_ele;
    for (auto i : m)
    {
        if (i.second > k)
        {
            maj_ele = i.first;
        }
    }

    cout << "Majority Element " << maj_ele << endl;
}