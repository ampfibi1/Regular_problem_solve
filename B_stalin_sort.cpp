#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ; 
	int mn = INT_MAX ; 
	for(int &x:a) cin >> x ; 

	for(int i=0; i<n; ++i){
		int cnt = 0 ; 
		for(int j=i; j<n-1; ++j){
			if(a[i]<a[j+1]){
				cnt++;
			}
		}
		mn = min(mn,cnt+i) ; 
	}

	cout << mn << endl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin >> t ; while(t--) solve();
}