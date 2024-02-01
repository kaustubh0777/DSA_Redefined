#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &v, int n)
{
    if (n == 1)
    {
        return;
    }
    int j;
    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            // shifting the array
            v[j + 1] = v[j];
            j = j - 1;
        }
        // putting the key element at its correct position
        v[j + 1] = key;
    }
    insertionsort(v,n-1);
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

    insertionsort(v, n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}