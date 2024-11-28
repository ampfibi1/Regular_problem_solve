#include<iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t ; cin >> t ; while(t--) 
	{
		int n , x , y ; cin >> n >> x >> y ; 
		int mn = min(x,y);
		int ans = n/mn;
		if(n%mn!=0) ans++;
		cout << ans << endl ; 
	}
}