#include <bits/stdc++.h>
#define n 1000000
using namespace std;
int sod(int nu)
{
    if(nu<10)
    return nu;
    else 
    return (nu%10)+sod(nu/10);
}

int main() 
{
    int t,i,p;
    bool prime[n+1];
	  memset(prime,true,sizeof(prime));
	  for(i=2;i*i<=n;i++)
	    if(prime[i])
	      for(p=i*i;p<=n;p+=i)
	        prime[p]=false;
   
    cin>>t;
 while(t--)
 {
	int num,i,p;
	cin >> num;

	for(i=num-1;i>=2;i--)
	  if(prime[i]&&prime[sod(i)])
  	{
	  cout <<i << endl;
  	break;
	  }
	}
}
