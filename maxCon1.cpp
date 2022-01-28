//Maximum consecutive 1's in a binary array
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxCon1(bool arr[], int n)
{
    int curr=0, res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            curr++;
            res=max(res, curr);
        }
        else
            curr=0;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    bool arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxCon1(arr, n);
    return 0;
}
