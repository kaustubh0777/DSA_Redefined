#include <bits/stdc++.h>
using namespace std;

int solve(int day, int last, vector<vector<int>> points,vector<vector<int>>dp)
{
    if (day == 0)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1)
    {
        return dp[day][last];
    }

    int maxi = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {
            int pts = points[day][i] + solve(day - 1, i, points,dp);
            maxi = max(maxi, pts);
        }
    }

    return dp[day][last]=maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points,vector<vector<int>>dp)
{
    return solve(n, 3, points,dp);

    // Write your code here.
}

int main()
{
    int n; // no of days
    cin >> n;

    vector<vector<int>> points = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};
    vector<vector<int>>dp(n,vector<int>(4,-1));

    int ans = ninjaTraining(n - 1, points,dp);

    cout << ans << endl;
}