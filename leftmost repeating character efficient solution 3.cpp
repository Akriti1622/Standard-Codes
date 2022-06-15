//leftmost repeating character efficient solution 3

#include <bits/stdc++.h>
using namespace std;
const int CHAR=256;
int Leftmost(string &s)
{
    int res=-1;
    int visited[CHAR];
    fill(visited, visited+CHAR, false);
    for(int i=s.length();i>=0;i--)
    {
        if(visited[s[i]])
            res=i;
        else
            visited[s[i]]=true;
    }
    return res;
}
int main() {
    string s;
    getline(cin, s);
    cout<<Leftmost(s);
    return 0;
}
