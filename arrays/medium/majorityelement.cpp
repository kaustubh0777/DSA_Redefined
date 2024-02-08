#include <bits/stdc++.h>
using namespace std;

// Using Moore's Voting Algorithm
    int majorityElement(vector<int>& nums)
    {
        int c=0;
        int maj;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                maj=nums[i];
                c++;
            }
            else if(nums[i]==maj)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return maj;
        
    }
int main()
{
    int n, in;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    int ans =  majorityElement(v);

    cout << "Majority Element " << ans<< endl;
}