//https://codeforces.com/contest/1990/problem/A
#include<iostream>
#include<map>
using namespace std; 

void solve()
{
	int n ; cin >> n ;

	map<int,int> ok ; 
	for(int i=0; i<n; ++i)
	{
		int x ; cin >> x ; 
		ok[x]++;
	}

	for(auto &pr : ok)
		if(pr.second&1) 
		{
			cout << "YES\n" ;
			return ;
		}

	cout << "NO\n" ; 

	/*int arr[n] ; 
	for(auto &x:arr) cin >> x ; 
	
	sort(arr,arr+n,greater<int>());	
	
	map<int,int> ok ;
	for(auto it : ok) it[] 
	bool f = true ; 
	int cnt=0;
	for(int i=0; i<n && f; ++i)
		(arr[0]==arr[i]) ? cnt++ : f=false;
			
	
	cout << ((cnt&1) ? "YES\n" : "NO\n");*/
}
int main()
{
	int tt ; cin >> tt ; 
	while(tt--){solve();}
}