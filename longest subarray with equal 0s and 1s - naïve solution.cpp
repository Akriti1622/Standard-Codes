//longest subarray with equal 0s and 1s - naive solution

#include<bits/stdc++.h>
using namespace std;

int longestSub(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int c0=0, c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
            c0++;
            else
            c1++;
            if(c0==c1)
            res=max(res, c0+c1);
        }
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
    cout<<longestSub(a, n)<<endl;
}
