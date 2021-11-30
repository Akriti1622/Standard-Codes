//Find the only odd occuring number - Efficient Solution
//Time Complexity :- O(n)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
int findOddTimes(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        res=res^arr[i];
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
    cout<<findOddTimes(arr, n);
    return 0;
}
