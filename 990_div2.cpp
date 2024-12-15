#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n];
	for(int &x:a) {
		cin >> x ; 
	}
	int sum = 0 , cnt = 0 ; 
	if(a[0]==1)cnt++,--sum;
	else {
		if(a[0]%8==1){
			a[0]%=8;
			cdn
			--a[0]; 
		}
		else sum +=a[0];
	}
		// sum+=a[0];

	for(int i=1; i<n; ++i){
		sum += a[0] ;
		if(sum%8==0) cnt++;
	}
	cout << cnt << endl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}