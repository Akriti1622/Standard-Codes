//longest substring with distinct characters -naïve solution

#include <bits/stdc++.h> 
using namespace std;
bool areDistinct(string &str, int i, int j)
{
    vector<bool> visited(256);
    for(int k=i;k<=j;k++)
    {
        if(visited[str[k]])
            return false;
        visited[str[k]]=true;
    }
    return true;
}
int longestDistinct(string &str)
{
    int n=str.length(), res=0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(areDistinct(str, i, j))
                res=max(res, j-i+1);
    return res;
}

int main() 
{ 
    string str;
    getline(cin, str);
    cout << longestDistinct(str); 
    return 0; 
}
