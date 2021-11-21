//Trailing zeroes in Factorial
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0;
   cin>>n;
   while(n/5>0) {
       res=res+n/5;
       n=n/5;
   }
   cout<<res;
   return 0;
}
