/*#include<bits/stdc++.h>
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
			cnt++;
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
}*/
#include<iostream>
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		int n , ans = 0 ; cin >> n ; 
		int a[n] ; 
		for(int &x:a) cin >> x ; 

		for(int i=0,j=1,sum=0; i<n; ++i){
			sum += a[i]; 
			while(j*j < sum) j+=2;
			ans += (sum==j*j) ; 
		}

		cout << ans << endl ; 
	}
}