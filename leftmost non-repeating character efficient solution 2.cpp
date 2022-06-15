//leftmost non-repeating character efficient solution 2

#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
int Leftmost(string &s)
{
    //fI -> to store first index
    
    int fI[CHAR];   
    
    fill(fI, fI+CHAR, -1);
    for(int i=0;i<s.length();i++)
    {
        if(fI[s[i]]==-1)
            fI[s[i]]=i;
        else
            fI[s[i]]=-2;
    }
    //-1  ->characters never appear
    //-2  ->characters which are repeated
    //>=0 ->characters ocurred only once
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(fI[i]>=0)
            res=min(res, fI[i]);
    }
    return (res==INT_MAX)?-1:res;
}
int main() {
    string s;
    getline(cin, s);
    cout<<Leftmost(s);
    return 0;
}
