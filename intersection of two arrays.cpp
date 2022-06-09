//intersection of two unsorted arrays


#include<bits/stdc++.h>
using namespace std;
int inter(int a[], int m, int b[], int n)
{
    int res=0;
    for(int i=0;i<m;i++)
    {
        bool repeated=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                repeated=true;
                break;
            }
        }
        if(repeated==true)
            continue;
        
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                res++;
                break;
            }
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
