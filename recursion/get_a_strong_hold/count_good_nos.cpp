#include<bits/stdc++.h>
using namespace std;

// the inituation is count of even nos in a place is 5
// and count of prime nos in an place is 4

// and there is an pattern formed such that no of 4's = n/2 and 5's is n-n/2

class Solution {
public:
    //   no of 4's = no of odd index's in string
    //    no of 5's = no of even index's in string
    // since in an unit place there can be possible 5 even nos and 4 prime
    long long myPow(long long x, long long n) 
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
            long long p=myPow(x,n/2);
            return (p*p) % 1000000007;

        }

        return (x*myPow(x,n-1)) % 1000000007;
        
    }
    int countGoodNumbers(long long n) 
    {
        long long c4=n/2;
        long long c5=n-c4;
        int m=1000000007;

        long long ans= (myPow(4LL, c4) * myPow(5LL, c5)) % m;

        return (int)ans;
    }
};
int main()
{
    Solution s;
    
    long long n;
    cin>>n;

    cout<<"Count of the good nos "<<s.countGoodNumbers(n)<<endl;

}
