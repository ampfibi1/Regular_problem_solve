#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
	int n ; cin >> n;
	map<int,int> m ; 
	for(int i=0; i<n; ++i){
		int x ; cin >> x ; 
		m[x]++;
	}

	int cnt = 0 , d = 0 ;
	for(auto x:m)
		(x.second==1?cnt++:d++);
	
	int ans = (cnt&1?cnt/2+1:cnt/2)*2 ; 
	
	cout << ans+d << endl ; 
}
int main(){
	int t ;cin >> t ; while(t--) solve(); 
}