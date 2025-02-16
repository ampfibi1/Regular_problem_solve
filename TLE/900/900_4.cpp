#include<iostream>
#include<algorithm>
using namespace std; 
using ll = long long ; 

void solve(){
	int a , b , n; cin >> a >> b >> n ; 
	int c[n] ; for(int &x:c) cin >> x ; 
	sort(c,c+n);
	ll ans = b; 
	for(int i=0; i<n; i++)
		ans += (min(c[i]+1,a)-1);
	cout << ans << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--)solve();
}