#include<bits/stdc++.h>
using namespace std; 


void solve(){
	int n , k ; cin >> n >> k ; 
	string s ; cin >> s ; 
	int b  = 0 ; 
	for(int i=0; i<n; i++)
		if(s[i]=='B') b++;
	vector<int> ans,vec ; 
	if(b==k) cout << 0 << endl ; 
	else if(b<k){
		int cnt = 0 ; 
		for(int i=0; i<n; ++i){
			if(s[i]=='A') cnt++;
			if(cnt ==k-b){
				cout << 1 << endl ; 
				cout << i+1 << ' ' << "B\n";
				break;
			}
		}
	}

	else{
		int cnt = 0 ; 
		for(int i=0; i<n; ++i){
			if(s[i]=='B') cnt ++;
			if(cnt ==b-k){
				cout << 1 << endl ; 
				cout << i+1 << ' ' << "A\n" ; 
				break; 
			}
		}
	}
}
int main(){
	int t ; cin >> t ; while(t--){
		solve();
	}
}