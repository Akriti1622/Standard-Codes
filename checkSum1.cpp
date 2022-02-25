//Find if there is a subarray with given sum - Efficient Solution
//It is for non-negative integers as elements of array
//Window sliding technique
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
bool checkSum(int arr[], int n, int sum)
{
    int currSum=arr[0], s=0;
    for(int e=1;e<=n;e++)
    {
        //Clean the previous window
        while(currSum>sum&&s<e-1)
        {
            currSum-=arr[s];
            s++;
        }
        if(currSum==sum)
            return true;
        if(e<n)
            currSum+=arr[e];
    }
    return (currSum==sum);
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
