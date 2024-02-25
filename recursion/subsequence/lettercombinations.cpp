#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, string output, string digits, vector<string> m,
               vector<string>& res) {
        if (ind>= digits.length()) {
            res.push_back(output);
            return;
        }
        int digit = digits[ind] - '0'; // this converts char digit to int digit;
        string val = m[digit];

        for (int i = 0; i < val.length(); i++) {
            char ch=val[i];
            output.push_back(ch); // add char from each digit
            solve(ind + 1, output, digits, m,
                  res); // move to different digit mapping
            output.pop_back();
        }

        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string output = "";
        if (digits.length() == 0) {
            return res;
        }
        vector<string> m(10);
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";

        solve(0,output, digits, m, res);

        return res;
    }
};

int main()
{
    Solution s;
    string str;
    cin>>str;
    vector<string>ans=s.letterCombinations(str);

    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}