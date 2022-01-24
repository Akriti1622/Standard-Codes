//Maximum difference problem with order - Naive solution
//Time Complexity = O(n^2)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxDiff(int arr[], int n)
{
    int res=arr[1]-arr[0];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            res=max(res,(arr[j]-arr[i]));
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxDiff(arr, n);
    return 0;
}
