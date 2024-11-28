#include<bits/stdc++.h>
using namespace std; 

void solve(){
	string s ; cin >> s ; 
	
	if(count(s.begin(),s.end(),'0') == s.size()){cout << 0 << endl ; return ; }

	int start, end ;

	for(start=0; start<s.size(); ++start){
		if(s[start]=='1'){
			break;
		}
	}
	for(end = s.size()-1; end>=0; --end){
		if(s[end]=='0'){
			break; 
		}
	}
	long long ans = 0 ;
	bool f = false ; 
	for(int i=start; i<=end; ++i){
		if(s[i]=='0'){
			ans += i-start+1 ;
			start++;
		}
	}
	cout << ans << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}