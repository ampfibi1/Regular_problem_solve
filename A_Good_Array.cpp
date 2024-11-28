//https://codeforces.com/contest/1856/problem/B
#include<bits/stdc++.h>
using namespace std; 
#define ll long long

void solve()
{
	int n,cnt=0 ; cin >> n ; 
	int a[n]; 
	ll sum = 0 ; 
	for(int &x : a) 
	{
		cin >> x ;
		if(x==1) cnt++ ;
		sum+=x ;  
	}
	cout << ((sum>=cnt+n&&n>1) ? "YES\n" : "NO\n") ; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ;
	while(t--) solve();
}