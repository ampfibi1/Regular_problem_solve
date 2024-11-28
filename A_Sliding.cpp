#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		ll n , m , r , c; 
		cin >> n >> m >> r >> c ; 

		/*cout << (n*m-(((r-1)*m)+c)-1)+(n-r)*m << endl ;
		
			// -((n-r)*(1+m)))-1 << endl ;*/
		//greedy 
/*
		vector<ll> a(n*m,1) ;
		for(ll i=m; i<n*m-1; i+=m)
			a[i]=m; 
		// for(int x:a) cout << x << " " ;

		ll sum = 0 ; 
		for(ll i=(r-1)*m+c; i<n*m; ++i) sum+=a[i];
		cout << sum << endl ; */

		ll index = (r-1)*m+c;
		ll ans = (n*m-index) ;
		if(n==r || n==1) cout << ans << endl ; 
		else {
			ans = (n*m-index-(n-r))+(n-r)*m;
			cout << ans << endl ;  
		}
	}
}