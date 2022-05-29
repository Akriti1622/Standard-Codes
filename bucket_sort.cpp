//BUCKET SORT
//T.C. :- best and average case :- O(n+k)   worst case :- O(n^2) k->no. of buckets
//A.S. :- O(n)
#include<bits/stdc++.h>
using namespace std;
void bucketSort(float arr[], int n, int k)  //take int if values are int
{
    //finding max_val
    float max_val=arr[0];
    for(int i=1;i<n;i++)
    {
        max_val=max(max_val, arr[i]);
    }
    max_val++;
    //fill bucket
    vector<float> bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi=(k*arr[i])/max_val;
        bkt[bi].push_back(arr[i]);
    }
    //sort buckets
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    //join buckets
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            arr[index++]=bkt[i][j];
        }
    }
}
int main()
{
    int n, k;
    cin>>n>>k;
    float arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bucketSort(arr, n, k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
