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
	ll dif = max(a,b) - min(a,b) ; 
	cout << dif << " " ; 
	dif*
}
int main(){
	int t; cin >> t; while(t--) solve();
}