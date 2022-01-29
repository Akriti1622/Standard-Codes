//Maximum Length Even-Odd Subarray - Naive Solution
//Time Complexity = O(n^2)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
using namespace std;
int maxEvenOdd(int arr[], int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        int curr=1;
        for(int j=i+1;j<n;j++)
        {
            if((arr[j-1]%2!=0&&arr[j]%2==0)||(arr[j-1]%2==0&&arr[j]%2!=0))
                curr++;
            else
                break;
        }
        res=max(res, curr);
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
    cout<<maxEvenOdd(arr, n);
    return 0;
}
