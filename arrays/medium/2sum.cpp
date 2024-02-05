#include <bits/stdc++.h>
using namespace std;

void check(vector<int> &v, int n, int k)
{
    map<int, int> m;
    int ind1=-1, ind2=-1;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (m.find(k - v[i]) != m.end())
        {
            ind1 = i;
            ind2 = m[(k - v[i])];
            flag = 1;
            break;
        }
        else
        {
            m[v[i]] = i;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
        cout << ind1 << " " << ind2 << endl;
    }
    else{
        cout<<"No"<<endl;
        cout << ind1 << " " << ind2 << endl;
        
    }
}

int main()
{
    vector<int> v;
    int n, in;
    cin >> n;

    cout << "Enter the value of k" << endl;
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    check(v, n, k);
}