#include<iostream>
#include<math.h>
using namespace std; 

int binaryExp(int a , int b)
{
	if(b==0) return 1; 
	int ans = 1;
	while(b)
	{
		if(b&1) ans*=a;
		a*=a; 
		b >>=1;
	}
	return ans ; 
}
void solve()
{
	int n , k ; 
	cin >> n >> k ; 
	if(k==1) cout << n << endl ; 
	else
	{
		int cnt = 0 ;
		while(n)
		{
			n -= binaryExp(k,log(n)/log(k));
			cnt++;
		}
		cout << cnt << endl ; 
	}
}
int main()
{
	int t; cin >> t ; while(t--) solve();
}