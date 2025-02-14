#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(ll,n); 
	int cnt_2 , cnt_3 ; 
	cnt_2 = cnt_3 = 0 ; 
	/*
		6 = 2* 3 ; 
		12 = 2 * 2 * 3 ; 
		36 = 2 * 3 * 2 * 3 ; 
	*/
	while(n%2==0){
		n /= 2 ; 
		cnt_2++;
	}
	while(n%3==0){
		n /= 3 ; 
		cnt_3++;
	}
	/*cout << (cnt_2>cnt_3 ?-1 : (cnt_2<cnt_3?
			(cnt_3-cnt_2)+cnt_3 :
			-1))<< endl ;*/
	cout << ((n!=1  || cnt_2>cnt_3)?-1  : (cnt_3-cnt_2)+cnt_3) << endl ; 
	
	// cout << cnt_2 << " " << cnt_3 << endl ; 
}
mt