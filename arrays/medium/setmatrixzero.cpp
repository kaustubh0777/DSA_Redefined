#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int r=matrix.size();
        int c=matrix[0].size();

        // using dummy matrix 
        vector<int>d1(r,-1);//row
        vector<int>d2(c,-1);//col

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    d1[i]=0;
                    d2[j]=0;
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(d1[i]==0 || d2[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }


        
    }
};

int main()
{
    Solution s;
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(matrix);

    for(auto i:matrix)
    {
        cout<<"[ ";
        for(auto j:i)
        {
            cout<<j<<" ,";
        }
        cout<<"] ";
    }




}