//Maximum Subarray Sum
//Time Complexity = O(n^2)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=arr[j];
            res=max(res,curr);
        }
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
