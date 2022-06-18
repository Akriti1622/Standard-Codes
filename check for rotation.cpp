//check for rotation

#include<bits/stdc++.h>
using namespace std;
void rotate(string &temp, int n)
{
    char f=temp[0];
    int i=0;
    while(i<n-1)
    {
        temp[i]=temp[i+1];
        i++;
    }
    temp[i]=f;
}
bool check(string &s1, string &s2)
{
    int n=s1.length();
    int m=s2.length();
    if(n!=m)
        return false;
    string temp=s1;
    int i=0;
    while(i<n)
    {
        if(temp==s2)
            return true;
        if(i<n-1)
            rotate(temp, n);
        i++;
    }
    return false;
}
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<check(s1, s2);
    
}
