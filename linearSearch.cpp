//linear search in an array - (unsorted array)
//Time Complexity :- O(n)
//Auxiliary Space :- theta(1)
#include<iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;
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
    cout<<search(arr, n, x);
    return 0;
}
