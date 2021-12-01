//Find the two odd occurring number - Efficient Solution
//Time Complexity :- O(n)
//Auxiliary space :- O(1)
#include<iostream>
using namespace std;
void findOddTimes(int arr[],int n)
{
    int XOR=0, res1=0, res2=0;
    for(int i=0;i<n;i++)
        XOR=XOR^arr[i];
    int rsb=XOR&~(XOR-1);       //Rightmost Set Bit
    for(int i=0;i<n;i++)
    {
        if((arr[i]&rsb)!=0)
            res1=res1^arr[i];
        else
            res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findOddTimes(arr, n);
    return 0;
}
