//longest common subarray with given sum-efficient solution
//two binary arrays are given with same size

#include<bits/stdc++.h>
using namespace std;

int longestCommon(int arr1[], int arr2[], int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
        temp[i]=arr1[i]-arr2[i];
    //now for temp array find length of longest subarray with 0 sum
    unordered_map<int, int> m;
    int res=0, sum=0, pre=0;
    //pre is for prefix sum
    for(int i=0;i<n;i++)
    {
        pre+=temp[i];
        if(pre==sum)
            res=max(res, i+1);
        if(m.find(pre-sum)!=m.end())
            res=max(res, i-m[pre-sum]);
        if(m.find(pre-sum)==m.end())
            m.insert({pre, i});
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    cout<<longestCommon(a, b, n)<<endl;
}
