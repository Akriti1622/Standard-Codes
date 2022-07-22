//Ceiling on left side in an array - Efficient Solution

#include <bits/stdc++.h>
using namespace std;

void printCeiling(int arr[], int n){
    cout<<"-1"<<" ";
    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end())
            cout<<*(s.lower_bound(arr[i]))<<" ";
        else
            cout<<"-1"<<" ";
        s.insert(arr[i]);
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
