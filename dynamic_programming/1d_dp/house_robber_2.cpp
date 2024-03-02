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


// int func(int n, vector<int>& v, bool flag) {
//     if (n <= 0) { // Handle empty vector and base case (n = 1)
//         return 0;
//     }

//     int pick = v[n - 1] + func(n - 2, v, flag); // Adjusted pick case for circularity
//     int not_pick = func(n - 1, v, flag);

//     return max(pick, not_pick);
// }

int main() {
    int n, in;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> in;
        v.push_back(in);
    }
   
   vector<int>dp(n,-1);
   vector<int>temp1;
   vector<int>temp2;

   for(int i=0;i<n;i++)
   {
      if(i!=0)
      {
        temp1.push_back(v[i]);
      }
      if(i!=n-1)
      {
        temp2.push_back(v[i]);
      }
   }

   int ans1=func(n-1,temp1,dp);
   int ans2=func(n-1,temp2,dp);

   cout<<max(ans1,ans2);
   return 0;
}
