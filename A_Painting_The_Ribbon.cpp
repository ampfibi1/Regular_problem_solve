//https://codeforces.com/problemset/problem/1954/A
#include<iostream>
using namespace std; 

void solve()
{
	int n , m , k ; 
	cin >> n >> m >> k ; 

	int dont_touch = n/m ;
	if(n%m)dont_touch++;

	int ttt = n - dont_touch ; 
	cout << ((k>=ttt)?"NO\n":"YES\n");
}
int main()
{
	int t ; cin >> t; 
	while(t--){solve();}
}