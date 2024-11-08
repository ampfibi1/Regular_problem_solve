//https://codeforces.com/contest/2033/problem/B
#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n][n] ; 
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cin >> a[i][j] ; 
		}
	}
	int ans = 0 ; 
	for(int i=0; i<n; ++i){
		int mxU = 0 ,mxL = 0 ;
		for(int k=0,j=i; j<n; ++j,++k){
			if(a[k][j]<0){
				int x = abs(a[k][j]); 
				mxU = max(mxU,x);
			}
			if(i>0&&a[j][k]<0){
				int x = abs(a[j][k]) ; 
				mxL = max(mxL,x);
			}
		}
		ans += mxU + mxL ; 
	}
	cout << ans << endl ; 
	/*for(int i=1; i<n; ++i){
		int mx = 0 ;
		for(int k=0,j=i; j<n; ++j,++k){
			if(a[j][k]<0){
				int x = abs(a[j][k]) ; 
				mx = max(mx,x);
			}
		}
		ans += mx ; 
	}
	cout << ans << endl ;*/ 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--){
		solve();
		/*int n ; cin >> n ; 
		int ans = 0 ;
		for(int i=0; i<n*n; ++i){
			int x ; cin >> x ; 
			if(x<0) ans+=x ; 
		} 
		cout << abs(ans) << endl ; */
	}
}