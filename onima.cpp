#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;cin >> n ; 
	int a[n] ; string s ;
	map<char,int> m ;
	for(int i=0; i<26; ++i)
		m[char(i+97)];

	for(int &x:a){
		cin >> x;
		for(auto &_x:m){
			if(_x.second==x){
				s.push_back(_x.first);
				_x.second++;
				break ;
			}
		}
	}
	cout << s << endl ;
	
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
} 