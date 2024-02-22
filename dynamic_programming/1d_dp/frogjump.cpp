#include <bits/stdc++.h>
using namespace std;
// Frog jump problem in DP

int solve(int n, vector<int> heights,vector<int>dp)
{
    if (n == 0)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int left = solve(n-1, heights,dp) + abs(heights[n] - heights[n - 1]);
    int right=INT_MAX;
    if (n > 1)
    {

        right = solve(n-2, heights,dp) + abs(heights[n] - heights[n - 2]);
    }


    return dp[n]=min(left,right);

}

int main()
{
    int n, in;
    cin >> n;
    vector<int> heights;
    vector<int>dp(n+1,-1);
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        heights.push_back(in);
    }
  

    int ans = solve(n-1, heights,dp);


    cout<<ans<<endl;
}