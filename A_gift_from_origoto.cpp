#include<iostream>
using namespace std; 

int main(){
	int t ; cin >> t ; while(t--){
		int n ; cin >> n ; 
		int a[n] , mx=0,mn=INT_MAX; 
		for(int &x:a) {
			cin >> x ; 
			mx = max(mx,x);
			mn = min(mn,x); 
		}
		cout << (n-1)*(mx-mn) << endl ; 
	}
}