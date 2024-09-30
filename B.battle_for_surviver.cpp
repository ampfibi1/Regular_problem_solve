//https://codeforces.com/problemset/problem/2013/B
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t ; cin >> t ; 
	while(t--)
	{
		int n ; cin >> n  ; 
		long long r[n-2] , sum = 0; 
		for(int i=0; i<n-2; ++i)
		{
			cin >> r[i] ; 
			sum += r[i] ; 
		}
		long long l1,l2 ; 
		cin >> l1 >> l2 ; 
		sum = l1 - sum ;
		sum = l2 - sum ; 
		cout << sum << endl ;  
	}
}