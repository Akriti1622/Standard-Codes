//INSERTION SORT
//Time Complexity:- O(n^2)- worst and average case and O(n) - Best case
//Auxiliary Space:- O(1) -  worst case
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            swap(a[j+1], a[j]);
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion_sort(a, n);
    return 0;
}
