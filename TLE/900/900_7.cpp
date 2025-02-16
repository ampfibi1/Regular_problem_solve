#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , k ; cin >> n >> k ; int a[n] ; for(int &x:a) cin >> x;
	if(n==1){cout << 0 << endl ; return ; }
	sort(a,a+n);
	int pre = a[0] ;
	int cnt = 0 ; 
	vector<int> v ; 
	for(int i=1; i<n; i++){
		// cout << pre << " " ; 
		if(abs(a[i]-pre)<=k){
			cnt++;
			v.push_back(cnt);
			// cout << cnt << endl ;
		}
		else {cnt = 0 ;v.push_back(cnt);}
		pre = a[i] ;
	} 
	int max_ = 0 ;
	for(auto x:v){
		x++;
		max_ = max(x,max_) ;
	} 
	cout << n-max_ << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}