#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // the logic is simple count the number of subarrays with sum S, so we count S-k 
        // because if prefix sum uptill an index is S , then if we wanna find if an subarray exist under it we need to S-K
        map<int, int> m;
        m[0] = 1; // since count of prefix sum exists already
        int prefixsum = 0;
        int count = 0;
        int remove;

        for (int i = 0; i < nums.size(); i++) {
            prefixsum = prefixsum + nums[i];
            remove = prefixsum - k;
            count = count + m[remove];
            m[prefixsum] += 1;
        }

        return count;
    }
};

int main()
{
    Solution s;
    vector<int>v={1,2,3};
    int k=3;
    int count=s.subarraySum(v,k);

    cout<<count<<endl;

}