//Find maximum sum of k consecutive elements(subarray) in an unsorted array - Naive Solution
//Time Complexity :- O(n^2)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
int max_k_Sum(int arr[], int n, int k)
{
    int max_k_Sum=INT_MIN;
    for(int i=0;i<n-k+1;i++)
    {
        int currSum=0;
        for(int j=0;j<k;j++)
        {
            currSum+=arr[i+j];
            max_k_Sum=max(max_k_Sum, currSum);
        }
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
