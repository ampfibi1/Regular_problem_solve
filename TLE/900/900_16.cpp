#include<bits/stdc++.h>
using namespace std; 

void solve(){
	string s1,s2; cin >> s1 >> s2 ; 
	int fre[26] = {} ; 
	for(char x:s2) fre[x-'A']++;
		
	int j=0;bool f = false ; 
	for(int i=0; i<s2.size(); ++i){
		if(count(s1.begin()+j,s1.end(),s2[i]) >= fre[s2[i]-'A']){
			f = true ;
			// cout << "YES" << endl  ; 
			vector<int> pos ;
			for(int k=j; k<s1.size(); k++){
				if(s2[i]==s1[k])pos.push_back(k);
			}
			// for(auto x:pos) cout << x << " " ; 
			// cout << endl ; 
			j = pos[pos.size()-fre[s2[i]-'A']--]-- ; 
			// cout << j << endl ;
		}
		else {f=false;break;}
	}
	cout << (f?"YES\n":"NO\n") ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t ;while(t--) solve();
}
		/*if(in s1 (max s2[i] count position to end) count exist then yes ){
			vector<int> pos ; 
			for(int j=i; i<s1.size(); i++){
				pos.push_back(j);
			}
			i = pos[pos.size()-fre[s2[i]-'A']] ; 
		}*/