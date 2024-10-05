#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

void solve()
{
	ll n , f , a, b ; 
	cin >> n >> f >> a >> b ; 
	int m[n]  ; 
	
	int p = 0 ; 
	for(auto &x : m ) 
	{
		cin >> x ; 
		f -= min(abs(p-x)*a,b) ;
		p = x ;  
	}
	
	cout << (f>0 ? "YES\n" : "NO\n");
}
int main()
{
	int t ; cin >> t ;
	while(t--)
	{solve();} 
}