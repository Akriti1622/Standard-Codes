//COUNTING SORT - general purpose implementation
//T.C. :- O(n+k)
//A.S. :- O(n+k)
//good for sorting objects with multiple members
//elements of array ranges from 0 to k-1
#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n , int k)
{
    int *count=new int[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;                //count array formation
    
    for(int i=1;i<k;i++)
        count[i]=count[i-1]+count[i];   //cummulative count array
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;                //output array formation
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];               //copying output in original array
}
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    countSort(arr, n, k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
