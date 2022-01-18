//Largest element in an array
//Time Complexity = theta(n)
//Auxiliary Space = O(1)
#include<iostream>
using namespace std;
int getLargest(int arr[], int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getLargest(arr,n);
    return 0;
}
