//Anagram search - Efficient solution

#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
bool areSame(int Ct[], int Cp[])
{
    for(int i=0;i<CHAR;i++)
    {
        if(Ct[i]!=Cp[i])
            return false;
    }
    return true;
}
bool isPresent(string &txt, string &pat)
{
    int n=txt.length();
    int m=pat.length();
    int Ct[CHAR]={0};
    int Cp[CHAR]={0};
    for(int i=0;i<m;i++)
    {
        Ct[txt[i]]++;
        Cp[pat[i]]++;
    }
    for(int i=m;i<n;i++)
    {
        if(areSame(Ct, Cp))
            return true;
        Ct[txt[i]]++;
        Ct[txt[i-m]]--;
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
