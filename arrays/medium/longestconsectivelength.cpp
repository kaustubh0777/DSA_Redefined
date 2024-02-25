#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 0;
        int maxc = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (i + 1 < n) {
                if (nums[i + 1] - nums[i] == 1) {
                    c++;
                }
                else if(nums[i+1]==nums[i])
                {
                    continue;
                } else {
                    maxc = max(maxc, c);
                    c = 0;
                }
            }
        }
        return maxc+1;
    }
};
int main()
{
    Solution s;
    
    vector<int>v={0,3,7,2,5,8,4,6,0,1};

    int ans=s.longestConsecutive(v);
    cout<<ans<<endl;
}