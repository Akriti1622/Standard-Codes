//Minimum difference pair
/*
Expected Time Compelxity: O(N* log(N)) where N is length of array.
Expected Space Complexity: O(1)

Constraints:
2 <= N <= 10^5
1 <= nums[i] <= 10^9
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    // Code here
   	    sort(nums.begin(), nums.end());
   	    int m=nums[1]-nums[0];
   	    for(int i=2;i<nums.size();i++)
   	    {
   	        m=min(m, (nums[i]-nums[i-1]));
   	    }
   	    return m;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
