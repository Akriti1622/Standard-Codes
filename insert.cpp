//insert in an array
#include<iostream>
using namespace std;
void insert(int arr[], int n, int x, int cap, int pos)
{
    if(n==cap){
        cout<<n;
        return;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
int main()
{
    int n,x,cap,pos;
    cin>>n>>x>>cap>>pos;
    int arr[cap];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insert(arr, n, x, cap, pos);
    return 0;
}
