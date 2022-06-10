//subarray with given sum - efficient solution

#include<bits/stdc++.h>
using namespace std;

bool isSubarraySum(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(s.find(pre_sum-sum)!=s.end())
            return true;
        if(pre_sum==sum)
            return true;
        s.insert(pre_sum);
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
    int sum;
    cin>>sum;
    cout<<isSubarraySum(a, n, sum)<<endl;
}
