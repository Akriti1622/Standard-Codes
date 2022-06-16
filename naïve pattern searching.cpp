//naïve pattern searching

#include<bits/stdc++.h>
using namespace std;
void pattern(string &s, string &pat)
{
    int n=s.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
            if(pat[j]!=s[i+j])
                break;
        if(j==m)
            cout<<i<<" ";
    }
}
int main() {
    string s, pat;
    getline(cin, s);
    getline(cin, pat);
    pattern(s, pat);
    //cout<<s;
    return 0;
}
