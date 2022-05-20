//BUBBLE SORT - (optimized)
//Time Complexity:- O(n^2)- worst and average case    O(n) - Best case
//Auxiliary Space:- O(1)    worst case
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped=false)
            break;
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
    bubble_sort(a, n);
    return 0;
}
