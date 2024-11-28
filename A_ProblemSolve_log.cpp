#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; string s ; cin >> n >> s ; 
	map<char,int> m ; 
	for(int i = 0; i<n; ++i)
		m[s[i]]++;
	int cnt = 0 ; 
	for(auto x:m) 
		if((int(x.first-'A')+1)<=x.second)
			cnt++;  
	cout << cnt << endl ;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0) ;
	int t ; cin >> t ; while(t--) solve(); 
}