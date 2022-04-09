//Search in an infinite sorted array - efficient solution
//Time Complexity :- O(log(position))
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int x, int l, int h)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==x)   return mid;
        else if(a[mid]>x)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int search(int a[], int x)
{
    if(a[0]==x) return 0;
    int i=1;
    while(a[i]<x)
    {
        i=i*2;
    }
    if(a[i]==x) return i;
    return binarySearch(a, x, i/2+1, i-1);
}
int main()
{
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<search(a, x);
    
}
