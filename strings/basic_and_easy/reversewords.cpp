#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="this is kaustubh";


    string word = "";
    vector<string> words;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        if(s[i]== ' ' || i==s.length()-1)
        {
            words.push_back(word);
            word="";
        }
    }
    reverse(words.begin(),words.end());

    for(int i=0;i<words.size();i++)
    {
    cout<<words[i]<<" ";
    }
    cout<<endl;

}