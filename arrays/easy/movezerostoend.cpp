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

    int l = -1;

    for (int i = 0; i < n; i++)
    {
        // if there is atleast one zero
        if (v[i] == 0)
        {
            l = i;
            break;
        }
    }
    for (int j = l + 1; j < n; j++)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[l]);
            l++;
        }
        // even if there is only 1 zeros it would be moved at the end
        // and if only zeros are present then j will simply increment without swapping and as soon as it find any non zero it will swap it with the last zero
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}