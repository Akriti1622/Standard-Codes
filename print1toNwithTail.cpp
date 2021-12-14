//Print 1 to n using Recursion with tail recursion
//time complexity :- theta(n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
void print1toN(int n,int k)
{
    if(n==0)
    return;
    cout<<k<<" ";
    print1toN(n-1,k+1);
}
int main()
{
    int n,k=1;
    cin>>n;
    print1toN(n,k);
    return 0;
}
