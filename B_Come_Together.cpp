//https://codeforces.com/contest/1845/problem/B
#include<iostream>
using namespace std; 
#define ll long long

void solve()
{
	ll x , y,x1,y1,x2,y2 ; cin >> x >> y>>x1>>y1>>x2>>y2 ;

	ll ans = 0 ;
	if(x<=x1 && x <=x2 || x>=x1 && x >=x2) ans += min(abs(x1-x),abs(x2-x)) ;
	if(y<=y1 && y <=y2 || y>=y1 && y >=y2) ans += min(abs(y1-y),abs(y2-y)) ;  
	cout << ans+1 << endl ; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}