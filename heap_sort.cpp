//HEAP SORT
//T.C. :- O(nlogn)
//A.S. :- O(1)
#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[], int n, int i)
{
    int lar=i, l=2*i+1, r=2*i+2;
    if(l<n&&arr[l]>arr[lar])
        lar=l;
    if(r<n&&arr[r]>arr[lar])
        lar=r;
    if(lar!=i)
    {
        swap(arr[lar], arr[i]);
        Heapify(arr, n, lar);
    }
}
void buildHeap(int arr[], int n)
{
    for(int i=(n-2)/2;i>=0;i--)
        Heapify(arr, n, i);
}
void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    heapSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
