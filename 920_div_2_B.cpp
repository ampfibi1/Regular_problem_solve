#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	string s ; cin >> s ;
	map<char,int> m ; 
	for(char x:s)m[x]++;

	char ch , chMin; 
	int mx = 0 , mn = INT_MAX; 
	for(auto x:m){
		if(mx<x.second){
			mx = x.second ; 
			ch = x.first ; 
		}
		if(mn>x.second){
			mn = x.second ; 
			chMin = x.first ;
		}
	}
	for(int i=0; i<n; ++i){
		if(ch!=chMin){
			if(chMin==s[i]){//when both are same
				s[i]=ch ;
				break;
			}
		}
		else{
			if(ch!=s[i]){
				s[i]=ch;
				break;
			}
		}
	}
	cout << s << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--){
		solve();
	}
}