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
	rd(int,n)
	int a = 1 ; 
	for(int i=2 ; i*i<=n; i++){
		if(n%i==0){
			a = n/i;
			break;
		}
	}
	cout << a << " " << n-a << endl ; 
}
mt
