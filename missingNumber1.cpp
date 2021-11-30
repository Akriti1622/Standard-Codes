//Find the missing number - Efficient Method
//here numbers ranges from 1 to n+1
//It is also useful when number ranges from a to b
//Time Complexity :- O(n)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
int missingNumber(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        res=res^arr[i];
    for(int i=1;i<=n+1;i++)         //then vary i from a to b
        res=res^i;
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<missingNumber(arr, n);
    return 0;
}
