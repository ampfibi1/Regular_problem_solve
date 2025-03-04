#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 
#define sp " "

void solve(){
	rd(ll,w); rd(ll,h) ; 

	bool is_oposite_x = false ;

	int weight = -1 ; 
	ll ans = 0 ; 
	for(ll i=0; i<4 ; i++){
		rd(ll,k);
		vector<ll> v ;
		for(ll j=0; j<k; j++){
			rd(ll,x);
			v.push_back(x);
		}
        // i=0,1 --> horizontal 
        // i=2,3 --> vertical

        ans = max(ans , (v[k-1]-v[0] )*(i<2?h:w)); 
	}
	cout << ans << "\n" ;
}
mt