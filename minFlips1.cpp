//Minimum group flips to make same - Efficient Solution
//Time Complexity :- O(n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
using namespace std;
void minFlips(bool arr[], int n)
{
    int res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
               cout<<"From "<<i<<" to ";
            else
                cout<<i-1<<endl; 
        }
    }
    if(arr[n-1]!=arr[0])
        cout<<n-1<<endl;
}
int main()
{
    int n;
    cin>>n;
    bool arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    minFlips(arr, n);
    return 0;
}
