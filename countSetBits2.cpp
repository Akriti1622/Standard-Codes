//count set bits - Lookup table method
//Time Complexity :- Theta(1)
//Auxiliary Space :- Theta(1)
#include <bits/stdc++.h> 
using namespace std;
int Table[256]; 

// Function to initialise the lookup table  
void initialize()  
{
    Table[0] = 0;  
    for (int i = 1; i < 256; i++) 
    {  
        Table[i] = (i & 1) +  
        Table[i / 2];  
    }  
}
// Function to return the count of set bits in n  
int countSetBits(int n)  
{  
    return (Table[n & 0xff] +  
            Table[(n >> 8) & 0xff] +  
            Table[(n >> 16) & 0xff] +  
            Table[n >> 24]);  
}
int main()  
{  
// Initialise the lookup table  
    initialize();  
    int n;
    cin>>n;
    cout << countSetBits(n); 
}
