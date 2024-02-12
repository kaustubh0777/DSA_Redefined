#include <bits/stdc++.h>
using namespace std;

void sortarray(vector<int> &v, int n, int i)
{
    if (i > n)
    {
        return;
    }
    // 1 5 3 4
    // 1 3 5 4

    if (n - 1 >= 0)
    {
    if (v[n] < v[n - 1])
    {

        swap(v[n - 1], v[n]);
    }
    }


    return sortarray(v, n - 1, i + 1);
}
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

    sortarray(v, n, 0);
    cout << "line reached" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}