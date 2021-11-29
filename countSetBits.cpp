//count set bits - Naive method
//Time Complexity :- Theta(Total bits in n)
//Auxiliary Space :- Theta(1)
#include<iostream>
using namespace std;
int countBits(int n)
{
    int res=0;
    while(n>0)
        {
            res=res+(n&1);
            n=n>>1;
        }
        return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<countBits(n);
    return 0;
}
