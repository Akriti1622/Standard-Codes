//Merge Overlapping Inetrvals
//T.C. :- O(nlogn)
//A.S. :- O(1)
#include<bits/stdc++.h>
using namespace std;
struct Interval
{
    int st, end;
};
bool myComp(Interval i1, Interval i2)
{
    return (i1.st<i2.st);
}
void sort_(Interval a[], int n)
{
    sort(a, a+n, myComp);
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(a[i].st<=a[res].end)
        {
            a[res].end=max(a[res].end, a[i].end);
            a[res].st=min(a[res].st, a[i].st);
        }
        else
        {
            res++;
            a[res]=a[i];
        }
    }
    for(int i=0;i<=res;i++)
        cout<<a[i].st<<" "<<a[i].end<<endl;
}
int main()
{
    int n;
    cin>>n;
    Interval a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].st>>a[i].end;
    sort_(a, n);
    return 0;
}
