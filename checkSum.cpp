//Find if there is a subarray with given sum - Naive Solution
//It is for both inputs(non-negative integers and integers)
//Time Complexity :- O(n^2)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
bool checkSum(int arr[], int n, int sum)
{
    for(int i=0;i<n;i++)
    {
        int currSum=0;
        for(int j=i;j<n;j++)
        {
            currSum+=arr[j];
            if(currSum==sum)
                return true;
        }
    }
    return false;
}
int main()
{
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<checkSum(arr, n, sum);
    return 0;
}
