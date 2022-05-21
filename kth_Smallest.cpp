//kth smallest element - BY using LOMUTO PARTITION
//T.C.:- O(n^2) - worst case, O(nlogn) - average case but assumed O(n) by taking all P & C
//A.S.:- O(1)
//any type of array is given
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot=arr[h];
    int i=l-1, j=l;
    while(j<=h-1)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}
int  kth_Smallest(int arr[], int n, int k)
{
    if(k<=0||k>n)
    return -1;
    int l=0, h=n-1;
    while(l<=h)
    {
        int p=partition(arr, l, h);
        if(p==k-1)
            return p;
        else if(p>k-1)
            h=p-1;
        else
            l=p+1;
    }
}
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int index=kth_Smallest(a, n, k);
    if(index>=0)
        cout<<a[index];
        return 0;
}
