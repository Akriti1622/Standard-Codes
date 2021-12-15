//find sum of digits of number using recursion
//time complexity :- theta(d)
//auxiliary space :- theta(d)
#include<iostream>
using namespace std;
int getSum(int n)
{
    if(n<=9)
        return n;
    return getSum(n/10)+n%10;
}
int main()
{
    int n;
    cin>>n;
    cout<<getSum(n);
    return 0;
}
