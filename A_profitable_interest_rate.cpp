//https://codeforces.com/contest/2024/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--){
		int a , b ; cin >> a >> b ; 
		// if(a>=b) cout << a << endl ; 
		// else if(2*a<=b) cout << 0 << endl ; 
		// else{
			// cout << 2*a-b << endl ; 	
		// }
		cout << (a>=b ? a : max(2*a-b,0))<< endl ; 
	}
}