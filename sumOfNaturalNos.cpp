//find sum of n natural number using tail recursion
//time complexity :- theta(n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
int getSum(int n,int k)
{
    if(n==0)
        return k;
    return getSum(n-1,k+n);     
    //return n+getSum(n-1); //without tail recursion(and also remove k from everywhere).
}
int main()
{
    int n,k=0;
    cin>>n;
    cout<<getSum(n,k);
    return 0;
}
