//pair with given sum in unsorted array - efficient solution

#include<bits/stdc++.h>
using namespace std;

bool inter(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            return true;
        else
            s.insert(arr[i]);
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
    cout<<inter(a, n, sum)<<endl;
}
