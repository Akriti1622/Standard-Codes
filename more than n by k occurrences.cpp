//more than n by k occurrences - naïve solution

#include<bits/stdc++.h>
using namespace std;
void print_N_by_k(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int m=n/k;
    int i=0;
    while(i<n)
    {
        int count=1;
        while((i+count<n)&&(arr[i+count]==arr[i]))
            count++;
        if(count>m)
            cout<<arr[i]<<" ";
        i=i+count;
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
    print_N_by_k( arr, n, k);
}
