//Maximums of all subarrays of size k

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

void printMax(int arr[], int n, int k)
{
  
    deque<int> dq;
   
    for (int i = 0; i < k; ++i) {
        
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back(); 
        
        dq.push_back(i);
    }
   
    for (int i=k; i < n; ++i) {
        
        cout << arr[dq.front()] << " ";

        while ((!dq.empty()) && dq.front() <= i - k)
            dq.pop_front();
       
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
       
        dq.push_back(i);
    }
    
   cout << arr[dq.front()];
}

int main()
{
	int n, k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];

    printMax(arr, n, k);
    
	return 0;
}
