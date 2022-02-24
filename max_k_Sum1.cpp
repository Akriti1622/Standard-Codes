//Find maximum sum of k consecutive elements(subarray) in an unsorted array - Efficient Solution
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
int max_k_Sum(int arr[], int n, int k)
{
    int currSum=0;
    for(int i=0;i<k;i++)
    {
        currSum+=arr[i];
    }
    int max_k_Sum=currSum;
    for(int i=0;i<n-k;i++)
    {
       currSum=currSum-arr[i]+arr[k+i];
        max_k_Sum=max(max_k_Sum, currSum);
    }
    return max_k_Sum;
}
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<max_k_Sum(arr, n, k);
    return 0;
}
