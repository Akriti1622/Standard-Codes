//Left rotate an array by one
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<iostream>
using namespace std;
void leftRotate(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leftRotate(arr, n);
    return 0;
}
