class Solution {
public:
    int lowerbound(vector<int>&nums,int x)
    {
        int low=0;
        int ans=nums.size();
        int high=nums.size()-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            // smallest no greater then or equal to x
            if(nums[mid]>=x)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        return ans;

    }
    int upperbound(vector<int>&nums,int x)
    {
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();

        while(low<=high)
        {
            int mid=(low+high)/2;
            // smallest number greater than x
            if(nums[mid]>x)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int x) 
    {
        // returning the lowerbound and the upperbound with an slight twist

        int lb=lowerbound(nums,x);
        int up=upperbound(nums,x);
        int n=nums.size();

        int first=-1,last=-1;

        if(lb==n || nums[lb]!=x)
        {
            return {-1,-1};
        }


        return {lb,up-1};

       
        
    }
};