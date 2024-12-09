#include<iostream>
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		int n ;cin >> n ; int a[n] ; 
		for(int &x:a) cin >> x ;
		int pre = a[0]; 
		cout << pre << endl ; 
		for(int i=1; i<n; ++i){
			cout << pre+a[i] << endl ; 
			pre += a[i] ; 
		}
	} 
}