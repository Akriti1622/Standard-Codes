//subarray with 0 sum-naïve solution

#include<bits/stdc++.h>
using namespace std;

bool is0Subarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum+=arr[j];
            if(curr_sum==0)
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cout<<is0Subarray(a, n)<<endl;
}
