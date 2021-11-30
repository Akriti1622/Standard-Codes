//Check if the number is power of 2 -Naive solution
//Time Complexity :- Theta(log n)
//Auxiliary Space :- Theta(1)
#include<iostream>
using namespace std;
string powerOf2(int n)
{
    if(n<=0)
    return "NO";
    while(n>1)
    {
        if(n&1)          //if(n%2==1)
        return "NO";
        n=n>>1;             //n=n/2
    }
    return "YES";
}
int main()
{
    int n;
    cin>>n;
    cout<<powerOf2(n);
}
