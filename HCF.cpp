//Greatest common divisor (HCF) of a and b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
   cin>>a>>b;
   if(a>b) {
       int temp=a;
       a=b;
       b=temp;
   }
   if(b%a==0)
   c=a;
   while(b%a>0) {
   c=b%a;
   b=a;
   a=c;
   }
   cout<<c;
   return 0;
}
