#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int in[n] ;
	map<int,int> m ;  
	for(auto &x:in) {
		cin >> x ; 
		m[x]++;
	}
	vector<int> a ;
	for(auto x:m){
		a.push_back(x.first);
	} 
	for(int x:a) cout << x << " " ; 
	cout << endl ; 
	bool exist = true ; 
	for(int i=0; i<a.size()-1; ++i){
		for(int j=i+1; j<a.size(); j++){ 
			cout << a[i] << " " << a[j] << endl ; 
			if((a[i]+a[i])<a[j] || (a[j]+a[j])<a[i]){
				cout << "Break " << a[i] << " " << a[j] << endl ; 
				exist = false ; 
				break; 
			}
		}
	}
	cout << (exist ? "YES\n" : "NO\n" ); 
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}