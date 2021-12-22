//Josephus problem
//time complexity :- theta(n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
int jos(int n, int k)
{
    if(n==1)
        return 0;
    return (jos(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k);       // if numbers started from 1 then cout<<jos(n,k)+1; 
    //or make another function to add 1 to the result of jos function.
    return 0;
}
