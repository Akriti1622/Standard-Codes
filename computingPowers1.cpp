//Computing  Powers - Recursive solution
//Time Complexity :- O(log n)
//Auxiliary Space :- O(log n)
#include<iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n&1)         //n%2==1 (for odd number)
    return temp*x;
    else
    return temp;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
  return 0;
}
