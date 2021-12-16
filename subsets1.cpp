//total subsets of a string using recursion   n=s.length()    (n=no. of elements in the string)
//time complexity :- O(2^n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
void subsets(string &s, int i, string curr)
{
    if(i==s.length())
    {
        cout<<curr<<endl;
        return;
    }
    else
    {
        subsets(s,i+1,curr);
        subsets(s,i+1,curr+s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    int i=0;
    string curr="";
    subsets(s,i,curr);
    return 0;
}
