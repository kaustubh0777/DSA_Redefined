#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> v, vector<int> out, int i,
               int n) {

        ans.push_back(out);
        for (int j = i; j < v.size(); j++) {
            if (j!=i && v[j] == v[j - 1]) {
                continue;
            }
            out.push_back(v[j]);
            solve(ans, v, out, j + 1, n);
            out.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> out;

        sort(nums.begin(),nums.end());

        solve(ans, nums, out, 0, n);

        return ans;
    }
};
int main()
{

    Solution s;
    vector<vector<int>>ans;
    vector<int>nums;

    nums={1,2,2};

    ans=s.subsetsWithDup(nums);

    for(auto i:ans)
    {
        cout<<"{ ";
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<" }";
    }
    cout<<endl;
}