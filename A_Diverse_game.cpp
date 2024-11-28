#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , m ; cin >> n >> m ; 
	int b[n][m] ; 
	for(int i=n-1; i>=0; --i){
		for(int j=m-1; j>=0; --j){
			cin>>b[i][j] ; 
		}
	}
	if(n*m==1){cout << -1 << endl ; return ; }
	// 
 	
	// cout << (n*m&1) << endl ; 
	if(n==1){
		int sj = m/2 ; 
		if((n*m)&1)swap(b[0][sj],b[0][sj+1]) ; 
	}
	else if(m==1){
		int si = n/2 ; 
		if((n*m)&1)swap(b[si][0],b[si+1][0]) ;
	}
	else{
		if((n*m)&1)swap(b[n/2][m/2],b[n/2+1][m/2+1]) ; 
	}

	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cout << b[i][j] << " " ; 
		} 
		cout << endl ; 
	}
}
int main(){
	int t; cin >> t ; while(t--) solve(); 
}