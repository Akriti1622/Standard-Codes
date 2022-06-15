//leftmost repeating character efficient solution 1

#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
int Leftmost(string &s)
{
    int count[CHAR]={0};
    for(int i=0;i<s.length();i++)
        count[s[i]]++;
    for(int i=0;i<s.length();i++)
        if(count[s[i]]>1)
            return i;
    return -1;
}
int main() {
    string s;
    getline(cin, s);
    cout<<Leftmost(s);
    return 0;
}
