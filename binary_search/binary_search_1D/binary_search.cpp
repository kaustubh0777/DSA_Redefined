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
    cout << "Enter the element to be searched" << endl;
    int x;
    cin >> x;
    int low = 0;
    int high = n - 1;
    int mid;
    int f = 0;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (v[mid] == x)
        {
            f = 1;
            break;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (f == 1)
    {
        cout << "Found the element" << endl;
    }
    else
    {
        cout << "Not in the array" << endl;
    }
}