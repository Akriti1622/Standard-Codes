//Delete Element in an array
//Time Complexity = theta(n)
//Auxiliary space = O(1)
#include<iostream>
using namespace std;
int deleteEle(int arr[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n)
        return n;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return (n-1);
}
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<deleteEle(arr,n,x);
    return 0;
}
