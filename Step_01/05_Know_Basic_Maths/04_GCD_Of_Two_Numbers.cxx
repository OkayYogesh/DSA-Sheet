//Return the GCD of two numbers. (remember to swap a and b if a is bigger number)

//Way 1: Iterate till min(a,b) and the max value of i which divides both.
//It works but might generate TLE.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;

  int gcd=1;
  for(int i=1; i<=min(a,b); i++){
    if(a%i==0 && b%i==0) gcd=i;
  }

  cout<<gcd<<"\n";

  return 0;
}

//Way 2: The bachpan ka method, long division method, divide bigger number with smaller number then smaller number with remainder and so till you get remainder as 0.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;

  int gcd=-1;
  while(gcd!=0)
  {
    gcd=b%a;
    if(gcd==0) break;
    b=a;
    a=gcd;
  }

  cout<<a<<"\n";

  return 0;
}

//Way 3: Just use the in-built function which is __gcd(a,b)
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;

  cout<<__gcd(a,b)<<"\n";

  return 0;
}

//Way 4: Euclidean Algorithm


