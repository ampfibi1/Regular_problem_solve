#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int mx = 0 , m = 0 ; 
	for(int i=0; i<n; ++i){
		int w , h ; cin >> w >> h ; 
		// cout << w << h << endl ; 
		mx = max(mx,w) ;
		m = max(m,h); 
		// cout << mx << m ; 
	}
	/*
		perimeter of rectangle : 2*(w+h)
	*/
	cout << 2*(mx+m) << endl ; 
}
int main(){
	int t;cin >> t ; while(t--) solve();
}