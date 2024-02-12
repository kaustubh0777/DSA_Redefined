#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(string f, int op, int cl, vector<string>& s) {
        if (op == 0 && cl == 0) // when open brack = close brack
        {
            s.push_back(f);
            return ;
        }
        if (op == cl) // initially its mandatory to put an opening bracket
        {
            string op1 = f;
            op1.push_back('(');
            solve(op1, op - 1, cl, s);
        } else if (op == 0) // opening brackets are finshed
        {
            string op2 = f;
            op2.push_back(')');
            solve(op2, op, cl - 1, s);
        } else if (cl == 0) // closing brackets are finshed
        {
            string op1 = f;
            op1.push_back('(');
            solve(op1, op - 1, cl, s);
        } else {
            string op1 = f;
            string op2 = f;

            op1.push_back('(');
            op2.push_back(')');

            solve(op1, op - 1, cl, s);
            solve(op2, op, cl - 1, s);
        }
    }
    vector<string> generateParenthesis(int n) {
        int op = n; // opening
        int cl = n; // closing

        string f = "";

        vector<string> s;

        solve(f, op, cl, s);

        return s;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;

    vector<string>st= s.generateParenthesis(n);

    for(int i=0;i<st.size();i++)
    {
    cout<<st[i]<<" ";
    }
    cout<<endl;
}