//Tower Of Hanoi using recursion  (n=no. of blocks in tower A, all to be transferred in tower C)
//time complexity :- O(2^n)
//auxiliary space :- theta(n)
#include<iostream>
using namespace std;
void TOH(int n,char A, char B, char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
        TOH(n-1,A,C,B);
        cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
}
int main()
{
    int n;
    cin>>n;
    char A='A', B='B', C='C';
    TOH(n,A,B,C);
    return 0;
}
