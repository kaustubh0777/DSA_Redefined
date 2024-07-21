pair<int, int> getFloorAndCeil(vector<int> &nums, int n, int x) 
{
	
	int ans=n;

	pair<int,int>p;

	int low=0;
	int high=n-1;

	while(low<=high)
	{
		int mid=(low+high)/2;

		if(nums[mid]>=x)
		{  
			ans=mid;
			high=mid-1;
		}
		else{
		low=mid+1;
		}
	}
   
   if(nums[ans]==x)
   {
	   return {x,x};
   }
   else if(ans==n)
   {
	   return {nums[ans-1],-1};
   }
   else if(ans==0)
   {
	   return {-1,nums[ans]};

   }
   else{
	   return {nums[ans-1],nums[ans]};
   }

	// Write your code here.
}