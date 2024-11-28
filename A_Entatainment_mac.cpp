#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; 
	string s ; cin >> n >> s ;

	string rev = s ;
	reverse(rev.begin(),rev.end());
	cout << ((s<=rev)?s:rev+s ) << endl ;

}
int main(){
	int t; cin>> t ; while(t--) solve();
}