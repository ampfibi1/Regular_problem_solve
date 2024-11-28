<<<<<<< HEAD
//https://codeforces.com/contest/2001/problem/A
#include<bits/stdc++.h>
using namespace std; 
 
void solve()
{
	int n ; cin >> n ; 
	map<int,int> m ; 
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		m[x]++;
	}
	int mx = 0 ; 
	for(auto x:m)
		mx = max(mx,x.second);
	cout << n-mx << endl ; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--)solve();
=======
//https://codeforces.com/contest/2001/problem/A
#include<bits/stdc++.h>
using namespace std; 
 
void solve()
{
	int n ; cin >> n ; 
	map<int,int> m ; 
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		m[x]++;
	}
	int mx = 0 ; 
	for(auto x:m)
		mx = max(mx,x.second);
	cout << n-mx << endl ; 
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--)solve();
>>>>>>> 886374bab59f2a2be1cbd0f6c74004cf0c51dec5
}