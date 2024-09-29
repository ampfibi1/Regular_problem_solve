//https://codeforces.com/contest/2020/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t ; 
	while(t--)
	{
		int n , k , cnt = 0 ; cin >> n >> k ; 
		bool f = true ;
		while(f)
		{
			int p = log(n)/log(k) ; 
			n -= pow(k,p) ;
			cnt++; 
			if(n==0) break;
		}
		cout << cnt << endl ; 
	}
}