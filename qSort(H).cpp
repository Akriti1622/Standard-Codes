//QUICK SORT - BY using HOARE PARTITION
//T.C.:-  O(n^2) - worst case, O(nlogn) - average and worst case
//A.S.:- O(logn) - worst case by tail eliminating
//Hoare partition is much faster than lomuto partition.
//not stable
#include<bits/stdc++.h>
using namespace std;
int Hpartition(int a[], int l, int h)
{
    int p=a[l];
    int i=l-1, j=h+1;
    while(true)
    {
        do{
            i++;
        }while(a[i]<p);
        do{
            j--;
        }while(a[j]>p);
        if(i>=j)
            return j;
        swap(a[i], a[j]);
    }
}
void qsort(int a[], int l, int h)
{
    while(l<h)
    {
        int p=Hpartition(a, l, h);
        qsort(a, l, p);
        l=p+1;
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
