//union of two unsorted arrays - naive solution

#include<bits/stdc++.h>
using namespace std;
int inter(int a[], int m, int b[], int n)
{
    vector<int> dist;
    int res=0;
    //for array a[]
    for(int i=0;i<m;i++)
    {
        bool present=false;
        for(int j=0;j<dist.size();j++)
        {
            if(a[i]==dist[j])
            {
                present=true;
                break;
            }
        }
        if(present==false)
            {
                res++;
                dist.push_back(a[i]);
            }
    }
    //for array b[]
    for(int i=0;i<n;i++)
    {
        bool present=false;
        for(int j=0;j<dist.size();j++)
        {
            if(b[i]==dist[j])
            {
                present=true;
                break;
            }
        }
        if(present==false)
            {
                res++;
                dist.push_back(b[i]);
            }
    }
    return res;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m], b[n];
    for(int i=0;i<m;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    cout<<inter(a, m, b, n);
}
