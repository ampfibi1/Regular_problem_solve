#include<bits/stdc++.h>
using namespace std; 

/*int main(){
	int t ; cin >> t ;
	map<string,int> m; 
	int i = 1 ; 
	while(t--){
		string s ; cin >> s ; 
		m[s]++;
		// cout << m[s] << endl ; 
		if(m[s]==1) cout << "OK\n" ;
		else cout << s+to_string(m[s]-1) << endl ;
	}
}*/
int main(){
	int t; cin >> t ;
	int freq[t] = {};
	string s[t] ; 
	for(auto &x:s) cin >> x ; 

	for(int i=0; i<t; ++i){
		int cnt = 0 ; 
		for(int j=0; j<t; ++j){
			if(s[i]==s[j])cnt++;
		}
		freq[i] = cnt ; 
	}		 
	for(int x:freq) cout << x << " " ; 
}