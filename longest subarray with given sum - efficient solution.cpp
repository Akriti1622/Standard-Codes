//longest subarray with given sum - naive solution

#include<bits/stdc++.h>
using namespace std;

int isSubarraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int pre_sum=0, res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
            res=max(res, i+1);
        if(m.find(pre_sum-sum)!=m.end())
            res=max(res, (i-m[pre_sum-sum]));
        if(m.find(pre_sum)==m.end())
            m.insert({pre_sum, i});
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
    int sum;
    cin>>sum;
    cout<<isSubarraySum(a, n, sum)<<endl;
}
