#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> out, int k, int n,
               int ind) {
        if (n == 0 && out.size() == k) {

            ans.push_back(out);

            return;
        }
        for (int i = ind; i <= 9; i++) {
            if (i <= n) {
                out.push_back(i);
                solve(ans, out, k, n - i, i + 1);
                out.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> out;
        vector<vector<int>> ans;

        solve(ans, out, k, n, 1);

        return ans;
    }
};

int main()
{
    int n,k;
    
    n=7;
    k=3;

    vector<vector<int>>ans=Solution().combinationSum3(k,n);

    for(auto i:ans)
    {
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }
}