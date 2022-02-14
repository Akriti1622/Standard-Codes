//Maximum Circular subarray sum - Naive Solution
//Time Complexity = O(n^2)
//Auxiliary Space = O(1)
#include<bits/stdc++.h>
using namespace std;
int maxCircularSum(int arr[], int n)
{
    if(n==0)
        return INT_MIN;
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max=max(curr_max, curr_sum);
        }
        res=max(res, curr_max);
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
    cout<<maxCircularSum(arr, n);
    return 0;
}
