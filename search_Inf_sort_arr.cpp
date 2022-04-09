//Search in an infinite sorted array -Naive solution
//Time Complexity :- O(position)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
int search(int a[], int x)
{
    int i=0;
    while(true)
    {
        if(a[i]==x) return i;
        if(a[i]>x)  return -1;
        i++;
    }
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
