#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) 
    {

        for(int i=num.length()-1;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                return (num.substr(0,i+1));
            }
        }

        return "";
        
    }
};

int main()
{
    Solution s;
    string h="1234";
    string ans= s.largestOddNumber(h);
    cout<<ans;
}