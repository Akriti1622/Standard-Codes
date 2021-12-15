//Rope cutting problem using recursion
//time complexity :- O(3^n)
//auxiliary space :- theta(maxpieces)
#include<iostream>
using namespace std;
int maxpieces(int n,int a,int b,int c)
{
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    int res=max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));
    if(res==-1)
        return -1;
    return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxpieces(n,a,b,c);
    return 0;
}
