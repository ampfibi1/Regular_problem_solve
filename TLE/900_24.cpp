#include<iostream>
#include<algorithm>
using namespace std; 
#define ll long long 

void solve(){
	ll a , b ; cin >> a >> b ;
	if(a==b){
		cout << 0 << " " << 0 << endl ; 
		return ; 
	}
	ll dif = abs(a-b) ; 
	cout << dif << " " ; 
	ll mn = max(a,b) ;
	cout << min(mn%dif,dif-mn%dif) << endl ;
	/*if(a%dif!=0) cout << (dif)*(((a+a%dif)/dif))-a << endl  ; 
	else  cout << 0 << endl   ;*/
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t; while(t--) solve();
}