//longest subarray with equal 0s and 1s - efficient solution

//replace every 0 with -1
//now call the function to find length of longest subarray with 0 sum

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        if(arr[i]==0)
            arr[i]=-1;
    unordered_map<int, int> m;
    int sum=0, res=0, pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==sum)
        {
            res=max(res, i+1);
        }
        if(m.find(pre_sum-sum)!=m.end())
        {
            res=max(res, (i-m[pre_sum-sum]));
        }
        if(m.find(pre_sum-sum)==m.end())
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
    cout<<longestSubarray(a, n)<<endl;
}
