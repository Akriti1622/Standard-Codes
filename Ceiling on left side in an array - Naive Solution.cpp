//Ceiling on left side in an array - Naive Solution

#include <bits/stdc++.h>
using namespace std;

void printCeiling(int arr[], int n){
    cout<<"-1"<<" ";
    for(int i=1;i<n;i++){
        int diff=INT_MAX;
        for(int j=0;j<i;j++){
            if(arr[j]>=arr[i])
                diff=min(diff,arr[j]-arr[i]);
        }
        if(diff==INT_MAX)
            cout<<"-1"<<" ";
        else
            cout<<(arr[i]+diff)<<" ";
    }
}

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	
	printCeiling(arr,n);
}
