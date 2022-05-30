//print matrix in spiral form
#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>>& a)
{
    vector<int> v;
    int t=0, l=0;
    int b=a.size()-1;
    int r=a[0].size()-1;
    while(t<=b&&l<=r)
    {
        for(int i=l;i<=r;i++)
            v.push_back(a[t][i]);
        t++;
        for(int i=t;i<=b;i++)
            v.push_back(a[i][r]);
        r--;
        if(t<=b)
        {
        for(int i=r;i>=l;i--)
            v.push_back(a[b][i]);
        b--;
        }
        if(l<=r)
        {
        for(int i=b;i>=t;i--)
            v.push_back(a[i][l]);
        l++;
        }
    }
    return v;
}

int main()
{
    int m, n;
    cin>>m>>n;
    vector<vector<int>> a;
    for(int i=0;i<m;i++)
    {
        vector<int> v;
        
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        a.push_back(v);
    }
    vector<int> ans=spiral(a);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
