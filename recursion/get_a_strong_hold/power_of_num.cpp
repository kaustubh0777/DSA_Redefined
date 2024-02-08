#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

// using binary exponention logic
    double myPow(double x, int n) 
    {
        if(n==0)
        {
            return 1;
        }
        else if(n<0)
        {
            return 1/(x*myPow(x,-n-1)); // 2^-3 = 1/2^3 then 1/2^2 until power =0
        }
        else if(n%2==0)
        {
            double p=myPow(x,n/2);
            return p*p;

        }

        return x*myPow(x,n-1);
        
    }
};
int main()
{
    Solution s;
    double x;
    int n;

    cin>>x;
    cin>>n;

    cout<<"Power of the number is "<<s.myPow(x,n)<<endl;

}