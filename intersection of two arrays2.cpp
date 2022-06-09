//intersection of two unsorted arrays - efficient solution 2

#include<bits/stdc++.h>
using namespace std;
int inter(int a[], int m, int b[], int n)
{
    unordered_set<int> s(a, a+m);
    
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
        {
            res++;
            s.erase(b[i]);
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
    cout<<inter(a, m, b, n)<<endl;
}
