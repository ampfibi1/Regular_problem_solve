#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	if(n==1)cout << 1 << endl ; 
	if(n<5&&n>1) cout << 2 << endl ; 
	if(n>=5) {
		int v = 11 , cnt = 3 ; 
		for(int v=11; v<=n; (v*=2)++)
			cnt++; 
		cout << cnt << endl ; 
	}
}
int main(){
	int t ; cin >> t ; while(t--)solve();
}