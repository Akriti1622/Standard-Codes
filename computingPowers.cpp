//Computing  Powers - Iterative solution (Binary Exponentation)
//(bit operators are used because it is faster)
//Time Complexity :- O(log n)
//Auxiliary Space :- O(1)
#include<iostream>
using namespace std;
int computingPower(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n&1)      //n%2!=0
            res=res*x;
        n=n>>1;            //n=n/2
        x=x*x;
    }
    return res;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<computingPower(x,n);
  return 0;
}
