//Given a number check if it is armstrong or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int ans=n;

  int digits=log10(n)+1;

  double value=0;
  while(n>0)
  {
    value=value+pow(n%10, digits);
    n=n/10;
  }

  if(value==ans) cout<<"Yes\n";
  else cout<<"No\n";

  return 0;
}
