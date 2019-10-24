#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
ll fibo(ll n) {
    const double sqrt5 = std::sqrt(5);
    const double phi = (1 + sqrt5) / 2;
    return (ll)(std::pow(phi, n+1) / sqrt5 + 0.5);
}


int main() {
	// your code goes here
	ll n,i=0,c;
	long int t;
    cin>>t;
	while(t--){
	   cin>>n;
	   vector<ll> v;
	   vector<ll>::iterator ct;
	   //v.push_back(0);
       for ( c = 1 ; c <= n ; c++ )
        {
           v.emplace_back(fibo(i)%10);
           i++;
           //cout<<fibo(i)<<" ";
        }
        for ( i = 0 ; i < v.size(); i++ )
               cout<<v[i]<<" ";
        ct = v.begin();
        while(v.size() != 1){
            cout<<" c ";
            //cout<<v[ct]<<endl;
            v.erase(ct);
            ct+=1;
            for ( i = 0 ; i <v.size(); i++ )
               cout<<v[i]<<" ";
            cout<<endl;
            if( ct>=v.end()){
                ct = v.begin();
                continue;
            }
        }
        for ( c = 0 ; c <v.size(); c++ )
            cout<<v[c]<<" ";

	}

	return 0;
}
