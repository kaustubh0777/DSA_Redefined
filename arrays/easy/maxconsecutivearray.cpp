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

    int maxc = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            c++;
        }
        else
        {
            maxc = max(c, maxc);
            c = 0;
        }
    }
    maxc = max(c, maxc);

    cout << "Maximum No of 1's in the Array are " << maxc << endl;
}