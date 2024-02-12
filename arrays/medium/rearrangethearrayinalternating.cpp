#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>ans(n,0);

        int pos=0;
        int neg=1;

        for(int i=0;i<n;i++)
        {
         
            if(nums[i]>=0)
            {
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else
            {
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
        
    }
};
int main()
{
    Solution s;
    int n,in;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }
    vector<int>res=s.rearrangeArray(v);

    for(int i=0;i<res.size();i++)
    {
    cout<<res[i]<<" ";
    }
    cout<<endl;
}