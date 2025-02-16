#include<bits/stdc++.h>
using namespace std; 

void solve(){
	string s ; cin >> s; 
	/*int cnt_ab = 0;
	int cnt_ba = 0;
	for(int i=1; i<s.size(); i++){
		if(s[i]=='b' && s[i-1]=='a') cnt_ab++ ; 
		if(s[i]=='a' && s[i-1]=='b') cnt_ba++ ; 
	}*/
	if(s[0]==s[s.size()-1]) {
		cout << s << endl ;
		return ;
	}
	for(int i=s.size()-1; i>=0; --i){
		// cout << s[i] << endl; 
		s[i]=s[0];

		if(s[i]!=s[i-1]) break;
	}
	cout << s << endl ;  
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}