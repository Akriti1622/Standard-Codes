//Leaders in an array - Efficient solution
/*But this will print the numbers in reverse order
so, if you want to print in correct order make an
array of size n and copy the elements there and reverse it.*/
//Time Complexity = theta(n)
//Auxiliary Space = theta(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void leaders(int arr[], int n)
{
    int currLdr=arr[n-1];
    cout<<currLdr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>currLdr)
        {
            currLdr=arr[i];
            cout<<currLdr<<" ";
        }
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
