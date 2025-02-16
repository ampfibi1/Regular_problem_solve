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
	int cnt = 0 ; 
	bool b = false ; 
	for(auto x:m){
		if(x.second&1)cnt++;
		if(x.second==k||x.second==k+1) b=true;
	}
	if(cnt>0&&(k==cnt || k==cnt-1 || k==cnt+1)) cout << "YES\n";
	else if(!cnt && b){
		cout << "YES\n";
	}
	else{
		bool f = false ; 
		for(auto x:m) if(x.second%2==0) if(x.second+cnt==k) f=true;
		if(f)cout << "YES\n";
		else cout << "NO\n" ;
	} 
	
}
int main(){
	int tt ; cin >> tt ; while(tt--) solve();
}