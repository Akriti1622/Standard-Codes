//Remove duplicates from a sorted array
//Time Complexity = O(n)
//Auxiliary Space = O(1)
#include<iostream>
using namespace std;
int remDups(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<remDups(arr,n);
    return 0;
}
