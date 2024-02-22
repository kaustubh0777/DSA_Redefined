#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> m;

        if(s.length()!=t.length())
        {
            return false;
        }
    
        for (int i = 0; i < s.length(); i++)
        {
            if (m.find(s[i]) == m.end())
            {
                m[s[i]] = t[i];
                
            }
            else if(m[s[i]]!=t[i])
            {
                return false;
            }
        }
        m.clear();
         for (int i = 0; i < s.length(); i++)
        {
            if (m.find(t[i]) == m.end())
            {
                m[t[i]] = s[i];
                
            }
            else if(m[t[i]]!=s[i])
            {
                return false;
            }
        }

    
       return true;
    }
};

int main()
{
    Solution obj;
    string s, t;
    cin >> s >> t;
    cout << obj.isIsomorphic(s, t);
}