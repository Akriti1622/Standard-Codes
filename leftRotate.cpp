//Left rotate an array by d (for all the values of d)
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<iostream>
using namespace std;
void reverse(int arr[], int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d)
{
    if(d>=n)
        d=d%n;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        return;
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leftRotate(arr, n, d);
    return 0;
}
