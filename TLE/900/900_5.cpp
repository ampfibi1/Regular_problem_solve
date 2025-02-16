/*#include<iostream>
using namespace std; 

void binary(int n){
	for(int i=10; i>=0; i--){
		cout << ((n>>i)&1) ;
	}
}
void solve(){
	int n ; cin >> n ; 
	int a[n] ; for(int &x:a) cin >> x ; 
	if(n&1){
		cout << 4 << endl ; 
		cout << 1 << " " << n-1 << endl ; 
		cout << 1 << " " << n-1 << endl ; 

		cout << n-1 << " " << n << endl ;
		cout << n-1 << " " << n << endl ;
	}
	else{
		cout << 2 << endl ; 
		cout << 1 << " " << n << endl ; 
		cout << 1 << " " << n << endl ; 
	}
}
int main(){
	int  t; cin >> t ; while(t--) solve();
	// int n ; cin >> n ;
// 
	// for(int i=0; i<n; ++i){
	 	// int x ; cin >> x ; 
	 	// binary(x) ;
	 	// cout << endl ; 
	// }
}*/
#include<iostream>

int main(){
	if(!(6^6)){
		printf("YES") ;
	}else printf("NO") ; 
}