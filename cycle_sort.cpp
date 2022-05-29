//CYCLE SORT
/*
Time Complexity : O(n2) 
Worst Case : O(n2) 
Average Case: O(n2) 
Best Case : O(n2)
This sorting algorithm is best suited for situations where memory 
write or swap operations are costly. 
*/

#include<bits/stdc++.h>
using namespace std;
void cycle_sort(int arr[], int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        //int writes=0;     // to count minimum no. of swaps
        int item=arr[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++)
        {
            if(arr[i]<item)
                pos++;
        }
        if(pos==cs)
            continue;
            
        while(item==arr[pos])
            pos++;
        if(pos!=cs)
        {
            swap(item, arr[pos]);
            //writes++:
        }
        
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            {
                if(arr[i]<item)
                pos++;
            }
            while(item==arr[pos])
            {
                pos++;
            }
            if(item!=arr[pos])
            {
                swap(item, arr[pos]);
                //writes++;
            }
            //return writes;
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
    cycle_sort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
