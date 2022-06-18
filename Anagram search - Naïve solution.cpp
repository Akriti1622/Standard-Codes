//Anagram search - Naïve solution

#include<bits/stdc++.h>
using namespace std;
const int CHAR=256; 
bool areAnagram(string &txt, string &pat, int i)
{
    int count[CHAR]={0};
    int m=pat.length();
    for(int j=0;j<m;j++)
    {
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<CHAR;j++)
        if(count[j]!=0)
            return false;
    return true;
}
bool isPresent(string &txt, string &pat)
{
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=(n-m);i++)
    {
        if(areAnagram(txt, pat, i))
            return true;
    }
    return false;
}
int main()
{
    string txt, pat;
    getline(cin, txt);
    getline(cin, pat);
    cout<<isPresent(txt, pat);
    return 0;
}
