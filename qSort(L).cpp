//QUICK SORT - BY using LOMUTO PARTITION
//T.C.:- O(n^2) - worst case, O(nlogn) - average and worst case
//A.S.:- O(logn) - worst case by tail eliminating
//it is much faster than lomuto partition.
//not stable
#include<bits/stdc++.h>
using namespace std;
int Lpartition(int a[], int l, int h)
{
    int p=a[h];
    int i=l-1, j=l;
    while(j<=h-1)
    {
        if(a[j]<=p)
        {
            i++;
            swap(a[i], a[j]);
        }
        j++;
    }
    swap(a[i+1], a[h]);
    return i+1;
}
void qsort(int a[], int l, int h)
{
    begin:
    if(l<h)
    {
        int p=Lpartition(a, l, h);
        qsort(a, l, p-1);
        l=p+1;
        goto begin;
        //qsort(a, p+1, h);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l=0, h=n-1;
    qsort(a, l, h);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
