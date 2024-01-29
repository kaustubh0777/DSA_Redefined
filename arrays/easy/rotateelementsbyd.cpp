#include <bits/stdc++.h>
using namespace std;

void rotatebyleft(vector<int> &v, int k)
{
    vector<int> d(k, 0);

    for (int i = 0; i < k; i++)
    {
        d[i] = v[i];
    }

    for (int i = 0; i < v.size()-k; i++)
    {
        v[i] = v[k + i];
    }
    int l = 0;
    for (int i = v.size()-k; i < v.size(); i++)
    {
        v[i] = d[l];
        l++;
    }
}
void rotatebyright(vector<int> &v, int k)
{
    vector<int> d(k, 0);
    int n = v.size();

    for (int i = n - k, j = 0; i < n; i++, j++)
    {
        d[j] = v[i];
    }

    for (int i = n - k - 1; i >= 0; i--)
    {
        v[i + k] = v[i];
    }

    for (int i = 0; i < k; i++)
    {
        v[i] = d[i];
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

    cout << "Rotate by Left or Right" << endl;
    string s;
    cin >> s;

    cout << "Enter the value of k" << endl;
    int k;
    cin >> k;

    if (s == "left")
    {
        rotatebyleft(v, k);
    }
    if (s == "right")
    {
        rotatebyright(v, k);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
}