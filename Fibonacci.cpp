//find nth Fibonacci number , (n>=0)  
//for n=0, number = 0 and for n=1, number = 1.
//time complexity :- O(2^n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
