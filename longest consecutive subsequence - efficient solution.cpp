//longest consecutive subsequence - efficient solution

#include<bits/stdc++.h>
using namespace std;
void LongestCons(int arr[], int n, int k)
{
    unordered_map<int, int> m;
    for(int i=0;i<k;i++)
        m[arr[i]]++;
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++)
    {
        m[arr[i-k]]--;
        if(m[arr[i-k]]==0)
            m.erase(arr[i-k]);
        m[arr[i]]++;
        cout<<m.size()<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    LongestCons(arr, n, k);
}
