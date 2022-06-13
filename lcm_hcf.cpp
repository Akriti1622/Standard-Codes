// lcm and hcf of two numbers

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    if(a==1||b==1)
        return 1;
    int res=max(a, b);
    b=min(a, b);
    a=res;
    while(a%b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return b;
}
int lcm(int a, int b)
{
    return (a*b)/hcf(a, b);
}
int main() {
    // Write C++ code here
    int a, b;
    cin>>a>>b;
    cout<<lcm(a, b)<<endl;
    cout<<hcf(a, b)<<endl;
    return 0;
}
