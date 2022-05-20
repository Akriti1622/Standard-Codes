//SELECTION SORT
//Time Complexity:- O(n^2)- worst, average case and Best case
//Auxiliary Space:- O(1) -  worst case
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_ind])
            {
                min_ind=j;
            }
        }
        swap(a[min_ind], a[i]);
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
    selection_sort(a, n);
    return 0;
}
