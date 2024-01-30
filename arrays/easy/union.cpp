#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;

    int n, m, in;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v1.push_back(in);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> in;
        v2.push_back(in);
    }

    int i = 0, j = 0;

    vector<int> u;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            if (u.empty() || u.back() != v1[i])
            {
                u.push_back(v1[i]);

                i++;
            }
            else
            {
                i++;
            }
        }
        else if (v1[i] > v2[j])
        {
            if (u.empty() || u.back() != v2[j])
            {
                u.push_back(v2[j]);
                j++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            if (u.empty() || u.back() != v1[i])
            {
                u.push_back(v1[i]);

                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    while (i < n)
    {
        if (u.back() != v1[i])
        {
            u.push_back(v1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (u.back() != v2[j])
        {
            u.push_back(v2[j]);
        }
        j++;
    }

    for (int i = 0; i < u.size(); i++)
    {
        cout << u[i] << " ";
    }
    cout << endl;
}