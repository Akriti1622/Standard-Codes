//leftmost repeating character - naïve solution

#include <bits/stdc++.h>
using namespace std;
int Leftmost(string &s)
{
    for(int i=0;i<s.length();i++)
        for(int j=i+1;j<s.length();j++)
            if(s[i]==s[j])
                return i;
    return -1;
}
int main() {
    string s;
    getline(cin, s);
    cout<<Leftmost(s);
    return 0;
}
