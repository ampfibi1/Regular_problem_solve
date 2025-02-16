#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ;
	map<int,int> m ;
	for(int &x:a) {cin >> x ;m[x]++;}
	int mx = 0;
	for(auto x:m)mx=max(x.second,mx); 
	int ans = 0 ;

	while(mx < n){
        ans++; 
        ans += min(mx , n-mx);
        mx *= 2;
    }
	cout << ans << endl; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t ;while(t--) solve();
}