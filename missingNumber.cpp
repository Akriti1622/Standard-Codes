//Find the missing number - Naive Solution
//here numbers ranges from 1 to n+1
//Time Complexity :- O(n)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
int missingNumber(int arr[],int n)
{
    int totalSum=(n+1)*(n+2)/2;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return (totalSum-sum);
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
