//Majority element - Naive Solution
//Time Complexity :- O(n^2)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
int findMajority(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j])
                count++;
        if(count>n/2)
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findMajority(arr, n);
    return 0;
}
