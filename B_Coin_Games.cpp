//https://codeforces.com/contest/1972/problem/B
#include<iostream>
using namespace std; 

void solve()
{
	int n , cnt =  0; cin >> n ;
 
	for(int i=0; i<n; ++i)
	{
		char ch ; cin >> ch ; 
		if(ch=='U')cnt++;
	}
	cout << (cnt&1?"YES\n":"NO\n") ; 
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}