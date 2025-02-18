#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

ll subCombination(ll cnt,ll k){
	return ((cnt - k +1)*(cnt - k +2)/2);
}
void solve(){
	rd(ll,n);rd(ll,k); rd(ll,temp); 
	rda(ll,a);
	a.push_back(temp+1); 

	ll ans = 0 ;
	ll cnt = 0 ; 
	for(ll i=0; i<=n; i++){
		if(a[i]>temp && cnt>=k){
			ans += subCombination(cnt,k); 
			cnt = 0 ;
		}
		if(a[i]>temp) cnt = 0 ; 
		if(a[i]<=temp) cnt++;
	}  

	cout << ans << endl ; 
}
mt
