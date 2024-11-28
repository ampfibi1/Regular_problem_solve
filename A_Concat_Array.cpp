#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t ;cin >> t ; while(t--){
		int n ; cin >> n ;
		vector<vector<int>> v ; 
		for(int i=0; i<n; ++i){
			vector<int> x; 
			for(int j=0; j<n; ++j){
			 	int v ; cin >> v ; 
			 	x.push_back(v); 
			}
			v.push_back(x);
		}
		for(auto x:v){
			for(auto val:x){
				cout << val << " ";
			}
			cout << endl ; 
		}
		cout << endl ; 
	}
}