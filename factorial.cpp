//factorial of a number- Iterative solution
#include<iostream>
using namespace std;
int main()
{
    int n;
  cin>>n;
    int64_t res=1;
  for(int i=2;i<=n;i++)
    res=res*i;
  cout<<res;
  return 0;
}
