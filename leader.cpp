//Leaders in an array - Naive solution
//Time Complexity = O(n^2)
//Auxiliary Space = theta(1)
#include<iostream>
using namespace std;
void leaders(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
                break;
        }
        if(j==n)
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
    leaders(arr, n);
    return 0;
}
