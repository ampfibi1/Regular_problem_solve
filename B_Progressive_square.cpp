#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , c , d ; cin >> n >> c >> d ; 
	int a[n*n];
	int mn = INT_MAX;
	for(int &x:a){cin >> x ; mn = min(mn,x);}

	sort(a,a+(n*n));
	vector<int> pos ; 
	int pre = mn ; 
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			pos.push_back(pre) ; 
			pre += d ; 
		}
		pre = mn + c ; 
		mn += c ; 
	}
	sort(pos.begin(),pos.end());
	
	bool f = true ;
	for(int i=0; i<n*n; ++i)
		if(a[i]!=pos[i]){
			f=false ;
			break;
		}

	cout << (f?"YES\n":"NO\n") ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}