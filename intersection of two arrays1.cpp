//intersection of two unsorted arrays - efficient solution 1

#include<bits/stdc++.h>
using namespace std;
int inter(int a[], int m, int b[], int n)
{
    unordered_set<int> s_a(a, a+m);
    unordered_set<int> s_b(b, b+n);
    
    int res=0;
    for(auto i:s_a)
    {
        if(s_b.find(i)!=s_b.end())
        {
            res++;
            s_b.erase(i);
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
