//Print first m n-bonacci numbers - Efficient Solution (short code)
//Window sliding technique
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
void n_bonacci(int n, int m)
{
    int arr[m]={0};
    arr[n-1]=1;
    arr[n]=1;
    //uses sliding window
    for(int i=n+1;i<m;i++)
        arr[i]=2*arr[i-1]-arr[i-n-1];
    //Printing m n-bonacci numbers
    for(int i=0;i<m;i++)
        cout<<arr[i]<<" ";
    return;
}
int main()
{
    int n, m;
    cin>>n>>m;
    n_bonacci(n, m);
    return 0;
}
