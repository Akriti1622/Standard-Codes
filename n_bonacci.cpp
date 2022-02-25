//Print first m n-bonacci numbers - Efficient Solution
//Window sliding technique
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
void n_bonacci(int n, int m)
{
    int arr[m];
    int i=0;
    while(i<n-1&&i<m)
    {
        arr[i]=0;
        cout<<arr[i]<<" ";
        i++;
    }
    if(m>=n)
    {
        arr[n-1]=1;
        cout<<arr[n-1]<<" ";
    }if(m>n)
    {
        arr[n]=1;
        cout<<arr[n]<<" ";
    }
    int sum=2;
    for(int j=n+1;j<m;j++)
    {
        arr[j]=sum-arr[j-n-1];
        sum+=(arr[j]-arr[j-n-1]);
        cout<<arr[j]<<" ";
    }
    return;
}
int main()
{
    int n, m;
    cin>>n>>m;
    n_bonacci(n, m);
    return 0;
}
