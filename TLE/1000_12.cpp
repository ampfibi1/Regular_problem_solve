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
	rd(ll,n); rd(ll,k); rd(ll,b); rd(ll,s) ; 
	if(s<b*k || s>b*k + n*(k-1)){
		cout << -1 << endl; 
		return ; 
	}
	ll a1 = b*k ;
	s -= b*k ; 
	if(s>=k-1){
		a1 += (k-1); 
		s -= (k-1); 
	}else{
		a1 += s; 
		s = 0 ; 
	}
	cout << a1 << " " ;
	for(int i=2; i<=n; i++){
		ll ai ; 
		if(s>=k-1){
			ai = k-1 ; 
			s -= ai ; 
		}else{
			ai = s; 
			s -= ai ;
		}
		cout << ai << " " ; 
	} 
	cout << endl ; 
}
mt
