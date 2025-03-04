#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 
#define sp " "
#define end "\n"

void solve(){
	rd(ll,n) ;
	ll setBit = n-1 ;
	int k = 0 ;
	while(setBit){
		k++;
		setBit >>= 1 ;
	}
	for(int i=(1<<(k-1))-1 ; i>=0; i--) cout << i << sp ; 
	for(int i=(1<<(k-1)); i<n; i++) cout << i << sp ; 
	cout << end ; 
}
mt