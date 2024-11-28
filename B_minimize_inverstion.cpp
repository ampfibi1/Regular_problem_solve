//https://codeforces.com/contest/1918/problem/B
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	vector<pair<int,int>> a_b(n);

	for(int i=0; i<n; ++i) cin >> a_b[i].first ;
	for(int i=0; i<n; ++i) cin >> a_b[i].second ; 

	sort(a_b.begin(),a_b.end());

	for(int i=0; i<n; ++i) cout << a_b[i].first << " ";
	cout << "\n" ; 
	for(int i=0; i<n; ++i) cout << a_b[i].second << " ";
	cout << "\n" ; 
	/*int a[n],b[n];
	for(auto &x:a) cin >> x ; 
	for(auto &x:b) cin >> x ; 

	for(int i=0; i<n; ++i)
	{
		int min_index = i ; 
		for(int j=i+1; j<n; ++j)
		{
			if(a[min_index]>a[j])
				min_index = j ; 
		}
		swap(a[min_index],a[i]);
		swap(b[min_index],b[i]);
	}

	for(auto x : a) cout << x << " " ; 
	cout << "\n";
	for(auto x : b) cout << x << " " ; 
	cout << "\n"; */
}
int main()
{
	int t; cin >> t ; 	
	while(t--)
		{solve();}
}