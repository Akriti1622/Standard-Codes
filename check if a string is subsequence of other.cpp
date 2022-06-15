//check if a string is subsequence of other - iterative solution

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool isSubSeq(const string s1, const string s2, int n, int m)
{
    if(m>n)
        return false;
    int j=0;
    for(int i=0;i<n&&j<m;i++)
    {
        if(s1[i]==s2[j])
            j++;
    }
    return (j==m);
}
int main() {
    // Write C++ code here
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int n=s1.length();
    int m=s2.length();
    cout<<isSubSeq(s1, s2, n, m);
    return 0;
}
