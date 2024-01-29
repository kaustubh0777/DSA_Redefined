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

    cout << "Enter the element you want to search" << endl;
    int x;
    cin >> x;

    int f = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            f = 1;
        }
    }

    if (f == 1)
    {
        cout << "Found" << endl;
    }
    else
    {

        cout << "Not Found" << endl;
    }
}


