#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n ; cin >> n ; 
	int a[n] , mn = INT_MAX ; 
	for(int &x:a){
		cin >> x ; 
		mn = min(abs(x),mn) ;
	} 
	cout << mn << endl ; 
}