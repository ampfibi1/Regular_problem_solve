#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int a , b ; cin >> a >> b ; 
	int gcd = __gcd(a,b);
	cout << a*b/gcd << endl ; 
}
int main(){
	int tt ; cin >> tt ; while(tt--) solve();
}