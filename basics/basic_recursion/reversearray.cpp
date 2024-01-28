#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        swap(v[low], v[high - 1]);
        reverse(v, low + 1, high - 1);
    }
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
    int low = 0;
    int high = n;

    reverse(v, low, high);

    cout << "Reversed Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}