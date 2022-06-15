//leftmost repeating character efficient solution 2

#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
int Leftmost(string &s)
{
    int fIndex[CHAR];
    int res=INT_MAX;
    fill(fIndex, fIndex+CHAR, -1);
    for(int i=0;i<s.length();i++)
    {
        int fi=fIndex[s[i]];
        if(fi==-1)
            fIndex[s[i]]=i;
        else
            res=min(res, fi);
    }
    return (res==INT_MAX)?-1:res;
}
int main() {
    string s;
    getline(cin, s);
    cout<<Leftmost(s);
    return 0;
}
