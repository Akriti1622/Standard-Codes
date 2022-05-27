//COUNTING SORT - general purpose implementation
//T.C. :- O(n+k)
//A.S. :- O(n+k)
//good for sorting objects with multiple members
//elements of array ranges from minno to maxno (both inclusive)
#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n , int minno, int maxno)
{
    int k=maxno-minno+1;
    int *count=new int[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
    {
        int l=arr[i]-minno;
        count[l]++;                     //count array formation
    }
    
    for(int i=1;i<k;i++)
        count[i]=count[i-1]+count[i];   //cummulative count array
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        int l=arr[i]-minno;
        output[count[l]-1]=arr[i];
        count[l]--;                //output array formation
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];               //copying output in original array
}
int main()
{
    int n, minno, maxno;
    cin>>n>>minno>>maxno;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    countSort(arr, n, minno, maxno);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
