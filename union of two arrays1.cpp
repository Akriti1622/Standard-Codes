//union of two unsorted arrays - efficient solution

#include<bits/stdc++.h>
using namespace std;
int inter(int a[], int m, int b[], int n)
{
    unordered_set<int> s(a, a+m);
    for(int i=0;i<n;i++)
        s.insert(b[i]);
    return s.size();
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
