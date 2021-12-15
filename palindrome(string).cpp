//check if a string is palindrome or not using recursion
//time complexity :- O(n)
//auxiliary space :- O(n)
#include <iostream>
using namespace std;
bool isPal(string &s, int start, int end)
{
    if(start>=end)
        return true;
    return (s[start]==s[end])&&isPal(s, start+1, end-1);
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int start=0,end=n-1;
   cout <<isPal(s, start, end);
   return 0;
}
