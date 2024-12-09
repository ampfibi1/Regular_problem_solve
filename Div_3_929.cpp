#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ; 
	int sum = 0 ;
	for(int &x:a){
		cin >> x ;
		sum += x ; 
	}
	if(sum%n==0)cout << "YES\n" ;
	else cout << "NO\n" ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve(); 
	return 0 ; 
}