//reverse words in a string - efficient solution

#include <bits/stdc++.h>
using namespace std;
void rev(string &s, int l, int h)
{
    while(l<h)
    {
        swap(s[l], s[h]);
        l++;
        h--;
    }
}
void revWords(string &s)
{
    int n=s.length();
    int st=0;
    for(int en=0;en<n;en++)
    {
        while(s[en]==' ')
        {
            rev(s, st, en-1);
            st=en+1;
            en++;
        }
    }
    rev(s, st, n-1);
    rev(s, 0, n-1);
}
int main() {
    string s;
    getline(cin, s);
    revWords(s);
    cout<<s;
    return 0;
}
