#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ; for(int &x:a) cin >> x ; 
	vector<int> ans ; 
	ans.push_back(a[0]) ;  
	for(int i=1; i<n; ++i){
		ans.push_back(a[i]);
		if(a[i-1]>a[i])
			ans.push_back(a[i]);
	}
	cout << ans.size() << endl ; 
	for(int i=0; i<ans.size(); ++i)
		cout << ans[i] << " " ; 
	cout << endl ; 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}