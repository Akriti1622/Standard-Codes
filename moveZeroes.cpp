//Move zeroes to end
//Time Complexity = O(n)
//Auxiliary Space = theta(1)
#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
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
    moveZeroes(arr,n);
    return 0;
}
