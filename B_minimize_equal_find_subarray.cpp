#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int val ;
	for(int i=0; i<n; ++i){
		int x ; cin >> x ; 
		if(i==0)
			val=x ;
		else cout << x << " ";
	}

	cout << val << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}