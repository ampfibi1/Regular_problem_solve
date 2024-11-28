#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ;cin >> n ; 
	int a[n] , mx = 0 ;
	for(int &x:a) cin >> x ; 
	for(int i=0; i<n; i+=2)
		mx = max(mx,a[i]); 
	cout << mx << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}