//longest proper prefix suffix - efficient solution

#include<bits/stdc++.h>
using namespace std;
void fillLps(string str, int lps[])
{
    int n=str.length(), len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
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
