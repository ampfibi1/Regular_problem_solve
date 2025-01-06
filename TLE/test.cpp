#include<iostream>
#include<algorithm>
#include<map>
using namespace std; 

void solve(){
	int n,k ; cin >> n >> k ; 
	string s ; cin >> s ; 
	map<char,int> m ;
	for(int i=0; i<n; ++i){
		m[s[i]]++;
	} 
	int odd = 0 ;
	for(auto x:m){
		if(x.second&1)odd++;
	}
	int cnt = k-odd ;  
	k -= odd ;
	if(cnt>=-1) cout << "YES\n" ;
	else {
		cout << "NO\n";
	} 
	// cout << cnt << endl*/; 
}
int main(){
	int tt ; cin >> tt ; while(tt--) solve();
}