//https://codeforces.com/problemset/problem/2014/A
#include<iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t ; cin >> t ; while(t--) 
	{
		int n , k ; cin >> n >> k ; 
		int a[n] , have = 0 , ans = 0 ; 
		for(int &x : a) 
		{
			cin >> x ; 
			if(x>=k) have+=x ; 
			else if(!x && have)
			{
				have--;
				ans++;
			}
		}
		cout << ans << endl; 
	}
}