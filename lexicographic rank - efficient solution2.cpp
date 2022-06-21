//lexicographic rank - efficient solution 2
//for both repeating characters and distinct characters

#include <bits/stdc++.h> 
using namespace std; 
 
const int CHAR=256; 
long long fact(long long n) 
{ 
    return (n <= 1) ? 1 : n * fact(n - 1); 
} 
 
int lexRank(string &str) 
{ 
    long long res = 1; 
    long long n=str.length();
    long long mul= fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
        
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
        
    
    for(int i=0;i<n-1;i++){
        long long rep_fac=1;
        for(int j=1;j<CHAR;j++)
            rep_fac*=fact(count[j]-count[j-1]);
            
        mul=mul/(n-i);
        
        res=res+count[str[i]-1]*mul/rep_fac;
        for(int j=str[i];j<CHAR;j++)
            count[j]--;
    }
    return (int)res; 
} 
  
int main() 
{ 
    string str;
    getline(cin, str);
    cout << lexRank(str); 
    return 0; 
}
