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
    int sum = 0;
    int maxlen = 0;

    cout << "Enter the value of k" << endl;
    int k;
    cin >> k;

    map<long, long> m;

    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];

        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        //    if we find sum-k that means we found a subarray with sum k
        if (m.find(sum - k) != m.end())
        {
            int len = i - m[(sum - k)];
            maxlen = max(maxlen, len);
        }
        // maintain the index for prefix sum

        if (m.find(sum - k) == m.end())
        {
            m[(sum - k)] = i;
        }
    }

    cout<<"Length of the longest subarray = "<<maxlen<<endl;
}