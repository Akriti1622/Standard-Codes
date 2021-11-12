//Logarithmic Solution of "Number of digits in a number"
#include<bits/stdc++.h>
using namespace std;
int countdigit(long n)
{
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<countdigit(n);
   return 0;
}
