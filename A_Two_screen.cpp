#include<bits/stdc++.h>
using namespace std; 

void solve()
{
	string s,t ; cin >> s >> t ; 
	int i ;
	for(i=0; i<min(s.size(),t.size()); ++i) 
		if(s[i]!=t[i]) break;

	int ans = min(s.size(),t.size()) - 2*i + max(s.size(),t.size()); 
	if(i)++i;
	cout << ans+i << endl ; 
}
int main()
{
	int q ; cin >> q;  while(q--)solve();
}
