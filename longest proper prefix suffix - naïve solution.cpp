//longest proper prefix suffix - naïve solution

#include<bits/stdc++.h>
using namespace std;
int longPropPreSuf(string str, int n)
{
    for(int len=n-1;len>0;len--)
    {
        bool flag=true;
        for(int i=0;i<len;i++)
        {
            if(str[i]!=str[n-len+i])
                flag=false;
        }
        if(flag==true)
            return len;
    }
    return 0;
}
void fillLps(string str, int lps[])
{
    for(int i=0;i<str.length();i++)
        lps[i]=longPropPreSuf(str, i+1);
}
int main()
{
    string str;
    getline(cin, str);
    int n=str.length();
    int lps[n];
    fillLps(str, lps);
    for(int i=0;i<n;i++)
        cout<<lps[i]<<" ";
    return 0;
}
