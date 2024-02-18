#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> out, vector<int> v,
               int ind, int target) {
        if (ind == v.size()) {
            if (target == 0) {
                // if the array sum eq to target
                ans.push_back(out);
            }
            return;
        }

        if (v[ind] <= target) // the case when we pick
        {
            
            out.push_back(v[ind]);
            solve(ans, out, v, ind, target-v[ind]);
            out.pop_back();
        }
        // not pick case
        solve(ans, out, v, ind + 1, target); // the case when we move the index
                                             // but didnt add it to thr sum
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> out;

        solve(ans, out, candidates, 0, target);

        return ans;
    }
};

int main()
{
    vector<int>candidates;
    int target;

    candidates={2,3,6,7};
    target=7;

    vector<vector<int>>ans=Solution().combinationSum(candidates,target);

    for(auto i:ans)
    {
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }
}
    