//longest consecutive subsequence - efficient solution

#include<bits/stdc++.h>
using namespace std;
int LongestCons(int arr[], int n)
{
    unordered_set<int> s(arr, arr+n);
    int res=1;
    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
        {
            int curr=1;
            while(s.find(x+curr)!=s.end())
                curr++;
            res=max(res, curr);
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<LongestCons( arr, n);
}
