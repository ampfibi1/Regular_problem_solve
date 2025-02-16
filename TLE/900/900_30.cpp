#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(string,s);
	ll cnt_0 = 0 , cnt_1 = 0 ;
	for(char x:s){
		(x=='0'?cnt_0++:cnt_1++);
	}
	cout << (min(cnt_0,cnt_1)&1?"DA":"NET") << endl;
	// cout << cnt_0 << " " << cnt_1 << endl ; 
	// cout << ((s.size()/2)&1?"DA":"NET") << endl ;
}
mt