//Check if the number is power of 2 - Brian kerringam's algorithm's improvised version (most efficient)
//By checking the number has only 1 set bit
//Time Complexity :- Theta(1)
//Auxiliary Space :- Theta(1)
#include<iostream>
using namespace std;
bool powerOf2(int n)
{
    return (n!=0&&(n&(n-1))==0);
}
int main()
{
    int n;
    cin>>n;
    cout<<powerOf2(n);
}
