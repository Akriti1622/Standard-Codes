//Print n to 1 using Recursion
#include<iostream>
using namespace std;
void printNto1(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    return printNto1(n-1);
}
int main()
{
    int n;
    cin>>n;
    printNto1(n);
    return 0;
}
