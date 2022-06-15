//check for anagram - efficient solution

#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
bool isAnagram(string &s1, string &s2)
{
    if(s1.length()!=s2.length())
        return false;
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
        if(count[i!=0])
            return false;
    return true;
}
int main() {
    // Write C++ code here
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<isAnagram(s1, s2);
    return 0;
}
