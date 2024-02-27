#include <bits/stdc++.h>
using namespace std;

int func(int n, vector<int> v, vector<int> dp)
{
    dp[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        int pick = v[i];
        if (i > 1)
        {
            pick += dp[i - 2];
        }
        int not_pick = dp[i - 1];
        dp[i] = max(pick, not_pick);
    }
    return dp[n - 1];
}

// recursive / memoization approach
//  int func(int n,vector<int>v)
//  {
//      if(n==0) //simply add
//      {
//          return v[n];
//      }
//      if(n<0)
//      {
//          return 0;
//      }

//     int pick=v[n]+func(n-2,v); //picking non adjacent subsequence
//     int not_pick=0+func(n-1,v); //if we not pick the element at index

//     return max(pick,not_pick);

// }

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
    vector<int> dp(n, -1);
    int ans = func(n - 1, v,dp);

    cout << ans;
}