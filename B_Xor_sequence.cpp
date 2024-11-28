//https://codeforces.com/contest/1979/problem/B
//https://www.youtube.com/watch?v=biXR5h8kjTY
#include<bits/stdc++.h>
using namespace std; 

int binary_exp(int a,int b){
	int ans = 1 ; 
	while(b){
		if(1&(b))
			ans *= a ; 
		a *= a ;
		b>>=1;
	}
	return ans ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0) ; 
	int t  ; cin >> t ; while(t--){
		int x , y ; cin >> x >> y ; 
		// cout << (1&(x)) << endl ;
		// cout << (1&(y)) << endl ;
		int cnt = 0 ; 
		while((1&(x))==(1&(y))){
			x >>= 1; 
			y >>= 1;
			// cout << x << " " << y << endl ; 
			cnt++;
		} 
		cout << binary_exp(2,cnt) << endl ;
	}
}