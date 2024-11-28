//https://codeforces.com/contest/1983/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t; cin >> t ;
	while(t--)
	{
		int n ; cin >> n ; 
		vector<int> v;
		for(int i=1; i<=n; ++i)
		v.push_back(i);
		for(auto x:v) cout << x << " "; 
		cout << endl ;  
	}
}