#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	vector<int> a , b ;
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		a.push_back(x) ; 
	} 
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		b.push_back(x) ; 
	} 
	for(int x,y:a,b) cout << x << y << " " ; 

}
int main()
{
	int t ; cin >> t ; while(t--) solve();
}