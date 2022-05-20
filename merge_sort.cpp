//MERGE SORT
//Time Complexity:- theta(nlogn)- worst, average case and Best case
//Auxiliary Space:- O(n)
#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++)
        left[i]=a[l+i];
    for(int i=0;i<n2;i++)
        right[i]=a[m+1+i];
    int i=0, j=0, k=l;
    while(i<n1&& j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
            k++;
        }
        else
        {
            a[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    return;
}
void merge_sort(int a[], int l, int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        merge_sort(a, l, m);
        merge_sort(a, m+1, r);
        merge(a, l, m, r);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l=0, r=n-1;
    merge_sort(a, l, r);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
