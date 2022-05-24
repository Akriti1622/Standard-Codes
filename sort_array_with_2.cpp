//Sort an array with two arrays
//segregate positive and negative by using HOARE PARTITION
//segregate even and odd by using HOARE PARTITION
//sort binary array by using HOARE PARTITION
//T.C. :- O(n)
//A.S. :- O(1)
#include<bits/stdc++.h>
using namespace std;
void sort_(int a[], int n)
{
    int i=-1, j=n;
    while(true)
    {
        do{
            i++;
        }while(a[i]<0);     //while((a[i]&1)==0);//even-odd    //while(a[i]==0);//binary numbers
        do{
            j--;
        }while(a[j]>=0);    //while(a[j]&1);//even-odd        //while(a[j]==1);//binary numbers
        if(i>=j) return;
        swap(a[i], a[j]);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort_(a, n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
