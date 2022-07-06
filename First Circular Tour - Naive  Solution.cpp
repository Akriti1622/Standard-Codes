//First Circular Tour - Naive  Solution

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
    for(int i=0;i<n;i++)
    {
        int s=0, k=i, j=0;
        for(j=0;j<n;j++)
        {
            s=s+arr[k].petrol;
            s=s-arr[k].distance;
            k=(k+1)%n;
            if(s<0)
                break;
        }
        if(j==n)
            return (i+1);
    }
    return -1;
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
