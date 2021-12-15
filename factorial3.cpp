//find factorial of a number using tail recursion
//time complexity :- theta(n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
int64_t fact(int n,int64_t k)
{
    if(n==0||n==1)
        return k;
    return fact(n-1,k*n);
}
int main()
{
    int n;
    int64_t k=1;
    cin>>n>>k;
    cout<<fact(n,k);
    return 0;
}
