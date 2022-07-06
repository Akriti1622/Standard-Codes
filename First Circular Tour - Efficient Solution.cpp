//First Circular Tour - Efficient Solution

// C++ program to find circular tour for a truck
#include <bits/stdc++.h>
using namespace std;

// A petrol pump has petrol and distance to next petrol pump
class petrolPump
{
    public:
    int petrol;
    int distance;
};
 
// The function returns starting point if there is a possible solution,
// otherwise returns -1
//1- based indexing
int printTour(petrolPump arr[], int n)
{
    //s for start, curr for curr_petrol, prev for prev_petrol
    int s=0, curr=0, prev=0;
    for(int i=0;i<n;i++)
    {
        curr+=(arr[i].petrol-arr[i].distance);
        
        if(curr<0)
        {
            s=i+1;
            prev+=curr;
            curr=0;
        }
    }
    return ((curr+prev)>=0)?(s+1):-1;
}
// Driver code
int main()
{
    petrolPump arr[] = {{4, 6}, {8, 5}, {7, 3}, {4, 5}};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);
 
    (start == -1)? cout<<"No solution": cout<<"Start = "<<start;
 
    return 0;
}
