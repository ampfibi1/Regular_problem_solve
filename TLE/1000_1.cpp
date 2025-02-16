#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(string,s);
	ll cnt_0 = 0 , cnt_1 = 0 ;
	for(char &ch:s){
		if(ch=='0')cnt_0++;
		else cnt_1++;
	} 
	// if(cnt_1==cnt_0){cout << 0 << endl; return;}
	for(char &ch:s){
		if(!cnt_0 && ch=='1') break;
		if(!cnt_1 && ch=='0') break;
		if(ch=='0')cnt_1--;
		if(ch=='1')cnt_0--;
	}
	cout << max(cnt_1,cnt_0) << endl; 
}
mt