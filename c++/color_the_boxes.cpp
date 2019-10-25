
#include <iostream>
using namespace std;
int main() 
{
	long long int n,m,ans=1;
	cin >> n>>m;
	while(m>=1)
	{
	    ans=(ans*m)%1000000007;
	    m--;
	}
	cout << ans%1000000007 << endl;		// Writing output to STDOUT
return 0;
}
