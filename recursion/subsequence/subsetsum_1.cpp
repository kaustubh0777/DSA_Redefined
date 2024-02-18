#include <bits/stdc++.h>
using namespace std;

void subset_sum(vector<int> &ans, vector<int> out, vector<int> v, int i, int n)
{
    if (i >= n)
    {
        int s = 0;
        for (int i = 0; i < out.size(); i++)
        {
            s = s + out[i];
        }

        ans.push_back(s);

        out.clear();

        return;
    }

        out.push_back(v[i]);
        subset_sum(ans, out, v,i + 1, n);
        out.pop_back();
    

    subset_sum(ans, out, v,i + 1, n);
}

int main()
{
    vector<int> v;
    int n, in;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    vector<int> ans;
    vector<int> out;
    subset_sum(ans, out, v, 0, n);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}