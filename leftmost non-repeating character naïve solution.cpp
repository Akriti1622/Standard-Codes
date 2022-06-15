//leftmost non-repeating character naïve solution

#include <bits/stdc++.h>
using namespace std;
int nonRep(string &s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            if((i!=j)&&(s[i]==s[j]))
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
                return i;
    }
    return -1;
        
}
int main() {
    string s;
    getline(cin, s);
    cout<<nonRep(s);
    return 0;
}
