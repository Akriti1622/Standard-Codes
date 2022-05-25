//Overlapping Intervals
/*
Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(Log(N)) or O(N).

Constraints:
1 ≤ N ≤ 100
0 ≤ x ≤ y ≤ 1000
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         sort(intervals.begin(), intervals.end());
         vector<vector<int>> v;
         int x1=intervals[0][0];
         int y1=intervals[0][1];
         v.push_back({x1, y1});
         int i=1;
         int n=intervals.size();
         while(i<n)
         {
             int x2=intervals[i][0];
             int y2=intervals[i][1];
             if(x2<=y1)
             {
                 y1=max(y1, y2);
                 v.pop_back();
                 v.push_back({x1, y1});
             }
             else
             {
                 x1=x2;
                 y1=y2;
                 v.push_back({x1, y1});
             }
             i++;
         }
         return v;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
