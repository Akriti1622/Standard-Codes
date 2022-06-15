//check for anagram - naive solution

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool isSubSeq(const string s1, const string s2)
{
    int n=s1.length();
    int m=s2.length();
    if(n!=m)
        return false;
    string temp=s2;
    int c=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(s1[i]==temp[j])
            {
                temp[j]=0;
                c++;
            }
        }
    if(c==n)
        return true;
}
int main() {
    // Write C++ code here
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<isSubSeq(s1, s2);
    return 0;
}
