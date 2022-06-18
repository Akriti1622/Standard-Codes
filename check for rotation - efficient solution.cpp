//check for rotation - efficient solution

#include<bits/stdc++.h>
using namespace std;
bool check(string &s1, string &s2)
{
    if(s1.length()!=s2.length())
        return false;
    return ((s1+s1).find(s2)!=string::npos);
}
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<check(s1, s2);
    return 0;
}
