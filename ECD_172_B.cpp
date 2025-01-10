#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve(){
	int n , d ; cin >> n >> d ;
	
	vector<int> ans ; 
	ans.push_back(1);
	for(int i=3; i<=9; i+=2){
		int r = 1 ; 
		int num = d ; 
		bool f = true ; 
		while(num%i){
			num *= 10 ; 
			num += d ; 
			num %= i ; 
			r++ ; 
			if(r>= i+1){
				f = false ; 
				break ; 
			}
		}
		if(!f) continue ; 
		if(n>=r) ans.push_back(i);
		else {
			ll val = 1 ; 
			for(int i=1; i<=n; ++i) val *= i ; 
			if(val%r==0) ans.push_back(i);
		}
	}

	for(int i=0; i<ans.size(); ++i)
		cout << ans[i] << " " ; 
	cout << endl ; 
}
int main(){
	int t ; cin >> t ;while(t--) solve(); 
	return 0 ; 
}