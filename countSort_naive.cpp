//COUNTING SORT - Naive implementation
//T.C. :- O(n+k)
//A.S. :- O(k)
#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n , int k)
{
    int *count=new int[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
        int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            arr[index]=i;
            index++;
        }
    }
    //return;
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
