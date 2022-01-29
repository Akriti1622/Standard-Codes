//Maximum Subarray Sum - Efficient Solution
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n)
{
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(maxEnding+arr[i], arr[i]);
        res=max(maxEnding, res);
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
    cout<<maxSum(arr, n);
    return 0;
}
