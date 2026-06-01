//Return the number of digits in a number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int digits=0;
  while(n>0)
  {
    digits++;
    n=n/10;
  }

  cout<<digits<<"\n";
  return 0;
}
