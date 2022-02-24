//Find if there is a subarray of k elements with given sum - Efficient Solution
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
bool check_k_Sum(int arr[], int n, int k, int sum)
{
    int currSum=0;
    for(int i=0;i<k;i++)
    {
        currSum+=arr[i];
        if(currSum==sum)
            return true;
    }
    for(int i=0;i<n-k;i++)
    {
       currSum=currSum-arr[i]+arr[k+i];
        if(currSum==sum)
            return true;
    }
    return false;
}
int main()
{
    int n, k, sum;
    cin>>n>>k>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<check_k_Sum(arr, n, k, sum);
    return 0;
}
