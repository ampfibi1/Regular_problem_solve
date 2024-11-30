//https://codeforces.com/contest/2000/problem/A
#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int cnt = n , val = 1 ; 
	if(n<=10){cout << "NO\n"; return ; }
	while(cnt){
		cnt /= 10 ;
		val *= 10 ; 
	}
	int div = n/(val/100) ;
	int rem = n%(val/100) ;
	int rem_no = (val/1000) ; 

	if(div!=10) cout << "NO\n" ; 
	else if(rem>=rem_no&&rem>=2)
		cout << "YES\n" ; 
	else cout << "NO\n" ;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--){
		solve();
	}
}