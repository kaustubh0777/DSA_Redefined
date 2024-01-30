#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    map<char, int> m;

    for (int i = 0; i < a.length(); i++)
    {
        m[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        m[b[i]]--;
    }

    int f = 0;
    for (auto i : m)
    {
        if (i.second != 0)
        {
            f = 1;
        }
    }

    if (f == 0)
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not"<<endl;
    }
}