//count set bits - Brian Kerringam's Algorithm
//Time Complexity :- Theta(Set bit count)
//Auxiliary Space :- Theta(1)
#include<iostream>
using namespace std;
int countBits(int n)
{
    int res=0;
    while(n>0)
        {
            n=(n&(n-1));
            res++;
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
