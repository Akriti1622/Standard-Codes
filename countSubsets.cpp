//Subset Sum Problem
//time complexity :- theta(2^n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
int countSubsets(int arr[],int n,int sum)
{
    if(n==0)
        return (sum==0)?1:0;
    return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<countSubsets(arr,n,sum);
}
