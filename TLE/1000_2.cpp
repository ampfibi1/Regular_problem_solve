#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n); rd(int,k); rda(int,a);

	int even = 0 , mn = k;
	for(int &x:a){
		if(x%2==0) even++;
		mn = min(mn,(x%k==0?0:k-x%k));
	}
	if(k==4){
		if(even>=2) mn = 0 ;
		else if(even==1) mn = min(mn,1);
		else mn = min(mn,2) ;
	}
	cout << mn << endl; 
}
mt
