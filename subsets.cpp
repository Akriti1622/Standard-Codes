//total subsets of a string (bitwise operators)
//Power set using bitwise operator
//Power Set using Bitwise Operators
//Time Complexity :- O(2^n*n)
//Auxiliary Space :- O(1)
#include<bits/stdc++.h>
//#include<iostream>
//#include<valarray>        //pow(x,n) is present in this library
using namespace std;
void powerSet(string s)
{
    int n=s.length();
    int powsize=pow(2,n);
    for(int i=0;i<powsize;i++)
    {
        int j=0;
        while((i>>j)>0)
        {
            if((i>>j)&1)
                cout<<s[j];
            j++;
        }
        cout<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    powerSet(s);
    return 0;
}
