//find sum of digits of number - Iterative Solution
//time complexity :- theta(d)
//auxiliary space :- theta(1)
#include<iostream>
using namespace std;
int getSum(int n)
{
    int res=0;
    while(n>0)
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<getSum(n);
    return 0;
}
