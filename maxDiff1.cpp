//Maximum difference problem with order - Efficient solution
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxDiff(int arr[], int n)
{
    int res=arr[1]-arr[0], minVal=arr[0];
        for(int j=1;j<n;j++)
        {
            res=max(res,(arr[j]-minVal));
            minVal=min(arr[j],minVal);
        }
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
