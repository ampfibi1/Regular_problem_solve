#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n);
	int a[n-2]; for(int &x:a) cin >> x ; 
	n-=2;
	for(int i=1; i<n-1; i++){
		if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n" ; 
}
mt
