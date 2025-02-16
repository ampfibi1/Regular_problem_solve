#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n);rda(int,a); 
	unordered_map<int,int> m ; 
	for(int &x:a) m[x]++;

	ll l =-1, r=-1 , curr=0 , mx = 0 ;

	for(int i=0; i<n; i++){
		if(m[a[i]]==1) curr++; 
		else curr = 0 ; 
		if(mx<curr){
			r = i ; 
			l = i - curr + 1 ;
			mx = curr ;
		}
	}   
	if(!mx) cout << 0 << endl ; 
	else cout << l+1 << " " << r+1 << endl ; 
}
mt
