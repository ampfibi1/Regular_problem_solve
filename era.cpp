#include<bits/stdc++.h>
// #define ll long long 
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	string s ; cin >> s ;
	if(n==2 && s[0]==s[n-1] || s[0]==s[n-1]) {cout << "NO\n" ; return ;}   
	cout << "YES\n" ; 
}
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}