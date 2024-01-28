#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    int n, in;
    cin>>n;
    vector<int> v;

    cout << "Enter elements in the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

  for(auto i:m)
  {
    cout<<"The frequency of "<<i.first<<" is "<<i.second<<endl;
  }
}