#include<iostream>
#include<algorithm>
using namespace std; 

void solve()
{
	int a[3],mn = 0 , mx = 0 ;
	for(auto &x : a)
	{
		cin >> x ; 
		mn = min(mn,x);
		mx = max(mx,x);
	} 
	sort(a,a+3);
	if(a[0]==a[1] && a[1]==a[2]){cout << "YES\n"; return ; }

	int index = 0 ; 
	for(int i=0; i<3; ++i)
	{
		mx = mx - mn ;
		if(mx==mn )
		{
			if(a[1]==mx)
			{
				cout << "YES\n" ; 
				return ; 
			}
			else
			{
				mx = a[1] ; 
			}
		}
	}
	
	cout << "NO\n" ;
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}