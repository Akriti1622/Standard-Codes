//lexicographic rank - naive solution

#include<bits/stdc++.h>
using namespace std;
long long int fac(int n)
{
    int temp=n;
    long long int ans=1;
    while(temp>1)
    {
        ans*=temp;
        temp--;
    }
    return ans;
}
long long int pos(string &str)
{
    string t=str;
    sort(t.begin(), t.end());
    if(str==t)
        return 1;
    long long int ans=0;
    int size=str.length();
    for(int i=0;i<size;i++)
    {
        int n=size-i-1;
        for(int j=0;j<size;j++)
        {
            if(str[i]!=t[j]&&t[j]!='0')
            {
                ans+=fac(n);
            }
            else if(t[j]=='0')
            {
                continue;
            }
            else
            {
                t[j]='0';
                break;
            }
        }
    }
    return (ans+1);
}
int main()
{
    string str;
    getline(cin, str);
    cout<<pos(str);
    return 0;
}
