//Reverse an array
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<iostream>
using namespace std;
void revArray(int arr[],int n)
{
    int low=0, high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    revArray(arr,n);
    return 0;
}
