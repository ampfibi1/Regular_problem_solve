//https://codeforces.com/contest/2021/problem/A
#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--)
	{
		int n ;cin >>n ; 
		int a[n] ; 
		for(auto &x : a) cin >> x ;
		sort(a,a+n); 
		ll int ans = a[0];
		for(int i=1; i<n; ++i)
		{
			ans += a[i] ;
			ans/=2LL ; 
		}
		cout << ans << endl; 
	}
	return 0 ; 
}