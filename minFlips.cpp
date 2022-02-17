//Minimum group flips to make same - My Efficient Solution
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
void minFlips(int arr[], int n)
{
    int res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            res=arr[i];
            break;
        }
    }
        for(int i=0;i<n;i++)
        {
            if((arr[i]==res&&arr[i-1]!=res)||(arr[i]==res&&i==0))
                cout<<"From "<<i<<" ";
            if((arr[i]==res&&arr[i+1]!=res)||(arr[i]==res&&i==n-1))
                cout<<"to "<<i<<endl;
        }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    minFlips(arr, n);
    return 0;
}
