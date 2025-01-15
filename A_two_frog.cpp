#include<iostream>
using namespace std; 

void solve(){
	int n , a , b ; cin >> n >> a >> b ; 
	
	cout << ((abs(b-(a+1))&1) ?  "YES\n" : "NO\n") ;

}
int main(){
	int t ; cin >> t ; while(t--) solve();
}