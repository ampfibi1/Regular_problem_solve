#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int odd_cnt , event_cnt ; 
	odd_cnt = event_cnt = 0 ; 
	int a[n] ; for(auto &x : a){
		cin >> x ; 
		(x&1?odd_cnt:event_cnt)+=x; 
	}
	cout << ((odd_cnt&1)==(event_cnt&1) ? "YES\n" : "NO\n") ; 
	// cout << odd_cnt << " " << event_cnt << endl ; 
}
int main(){
	int t; cin >> t ; while(t--) solve();
}