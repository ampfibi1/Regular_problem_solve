#include<iostream>
#include<math.h>
using namespace std; 
#define ll long long

int __step(ll n){
	int cnt = 0 ; 
	while(n>3){
		cnt++;
		n = n / 4 ; 
	}
	return cnt ; 
}
void solve(){
	ll n ; cin >> n ; 
	cout << (1<<__step(n)) << "\n" ; 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int tt; cin >> tt ; while(tt--)solve();
	return 0 ; 
}