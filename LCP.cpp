//LCP - longest common prefix
/*
Expected time complexity: O(NlogN)
Expected space complexity: O(string length)

Constraints:
1 <= N <= 10^3
1 <= String Length <= 100
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        // code here
        string s=ar[0];
        for(int i=1;i<n;i++)
        {
            string t=ar[i];
            string u="";
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==t[j])
                {
                    char v=s[j];
                    u+=v;
                }
                else if(s[j]!=t[j])
                {
                    break;
                }
            }
             s=u;
        }
        if(s=="")
        {
            s="-1";
        }
        return s;
    }
};

// { Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends
