//Given a number n, if palindrome return yes.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int ans=n;
  int palindrome=0;
  while(n>0)
  {
    palindrome=(palindrome*10)+(n%10);
    n=n/10;
  }

  if(ans==palindrome) cout<<"YES\n";

  return 0;
}
