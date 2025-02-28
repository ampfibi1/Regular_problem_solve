#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n); rd(int,k); 
	rd(string,s); 
	int cnt = 0 ;
	for(int i=0; i<k; i++)
		if(s[i]=='W') cnt++;
	int ans = cnt ; 
	for(int i=k; i<n; i++){
		if(s[i]=='W') cnt++; 
		if(s[i-k]=='W') cnt--;
		ans = min(ans,cnt); 
	}
	cout << ans << endl ; 
}
mt
