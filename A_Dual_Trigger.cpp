//https://codeforces.com/problemset/problem/1951/A
#include<iostream>
#include<vector>
using namespace std; 

void solve()
{
	int n ; cin >> n ; 
	string s; cin >> s ;
	vector<int> v ; 
	for(int i=0; i<n; i++)
		if(s[i]=='1')
			v.push_back(i);

	if(v.size()&1)
		cout << "NO\n" ; 
	else if(v.size()==2 && v[1]-v[0]==1)
		cout << "NO\n";
	else
		cout << "YES\n";
}
int main()
{
	int t ; cin >> t; 
	while(t--){solve();}
}