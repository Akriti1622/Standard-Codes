//Recursive Solution of "Number of digits in a number"
#include <iostream>
using namespace std;
int countdigit(long n)
{
    if(n==0)
    return 0;
    return 1+countdigit(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<countdigit(n);
   return 0;
}
