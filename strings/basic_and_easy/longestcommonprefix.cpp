#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        string s="";

        string s1=strs[0];
        string s2=strs[strs.size()-1];

      int n=s1.length();
      int m=s2.length();

      int i=0;
      int j=0;
      string ans="";

      while(i<n && j<m)
      {
          if(s1[i]!=s2[j])
          {
              break;
          }

          ans+=s1[i];
          i++;
          j++;

      }

      return ans;


        
    }
};

int main()
{

    Solution s;
    int n;
    cin>>n;

    string in;
    vector<string>str;
    for(int i=0;i<n;i++)
    {
    cin>>in;
    str.push_back(in);
    }
    string ans=s.longestCommonPrefix(str);

    cout<<ans<<endl;


}