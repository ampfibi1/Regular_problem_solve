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
	rd(ll,n); rd(ll,x); 
	rda(ll,a); 
	ll mn , mx , cnt = 0 ;
	mn = mx = a[0] ; 

	for(int i=1; i<n; i++){
		if(mn>a[i]) mn = a[i] ; 
		if(mx<a[i]) mx = a[i] ;
		if(abs(mx-mn)>2*x){
			mn = a[i] ; 
			mx = a[i];
			cnt++;
		} 
	}

	cout << cnt << endl ; 
}
mt
