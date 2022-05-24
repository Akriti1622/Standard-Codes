//Chocolate Distribution Problem
//T.C. :- O(nlogn)
//A.S. :- O(1)
#include<bits/stdc++.h>
using namespace std;
int minDiff(int a[], int n, int m)
{
    if(m>n)
    return 0;
    sort(a, a+n);
    int res=a[m-1]-a[0];
    for(int i=1;i<n-m+1;i++)
    {
        res=min(res, (a[m-1+i]-a[i]));
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    cout<<minDiff(a, n, m);
}
