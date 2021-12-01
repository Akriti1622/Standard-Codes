//Find the two odd occurring number - Naive Solution
//Time Complexity :- O(n^2)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
void OddAppearing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
            if(arr[j]==arr[i])
                count++;
        if(count%2!=0)
        cout<<arr[i]<<" ";
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
    OddAppearing(arr,n);
    return 0;
}
