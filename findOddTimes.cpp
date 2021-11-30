//Find the only odd occurring number - Naive Solution
//Time Complexity :- O(n^2)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
int findOddTimes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(arr[j]==arr[i])
                count++;
            if(count%2!=0)
            return arr[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findOddTimes(arr,n);
    return 0;
}
