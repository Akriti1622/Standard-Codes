//Maximum Circular subarray sum - Efficient Solution
//Assumed (n>0)
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
int normalMaxSum(int arr[], int n)                  //Standard Kadane's algorithm
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
int OverallMaxSum(int arr[], int n)
{
    int max_normal= normalMaxSum(arr, n);           //Normal Sum
    if(max_normal<0)
        return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normalMaxSum(arr, n);   //Circular Sum
    return max(max_normal, max_circular);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<OverallMaxSum(arr, n);
    return 0;
}
