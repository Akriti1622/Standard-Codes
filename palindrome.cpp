//Check a number is a palindrome or not
#include<iostream>
using namespace std;
bool isPal(int n)
{
    int rev=0,temp=n;
    while(temp!=0)
    {
        int ld;
        ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    return (rev==n);
}
int main()
{
    int n;
    cin>>n;
    cout<<isPal(n);
  return 0;
}
