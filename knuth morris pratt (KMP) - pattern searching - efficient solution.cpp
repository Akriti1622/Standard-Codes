//knuth morris pratt (KMP) - pattern searching - efficient solution

#include<bits/stdc++.h>
using namespace std;
void fillLps(string pat, int lps[])
{
    int n=pat.length(), len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else
            {
                len=lps[len-1];
            }
        }
    }
}
void kmp(string txt, string pat)
{
    int n=txt.length();
    int m=pat.length();
    int lps[m];
    fillLps(pat, lps);
    int i=0, j=0;
    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            cout<<(i-j)<<" ";
            j=lps[j-1];
        }
        else if(i<n&&pat[j]!=txt[i])
        {
            if(j==0)
                i++;
            else
                j=lps[j-1];
        }
    }
}
int main()
{
    string txt, pat;
    getline(cin, txt);
    getline(cin, pat);
    kmp(txt, pat);
    return 0;
}
