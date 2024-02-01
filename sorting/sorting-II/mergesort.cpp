#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> t;
    int i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (v[i] <= v[j])
        {
            t.push_back(v[i]);
            i++;
        }
        else
        {
            t.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        t.push_back(v[i]);
        i++;
    }
        while(j<=high)
    {
        t.push_back(v[j]);
        j++;
    }

    for(int i=low;i<=high;i++)
    {
        v[i]=t[i-low];
    }
}
void mergesort(vector<int> &v, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    mergesort(v, low, mid);
    mergesort(v, mid + 1, high);
    merge(v, low, mid, high);
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
    int high = n-1;

    mergesort(v, low, high);

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<endl;
    }
    cout<<endl;
}