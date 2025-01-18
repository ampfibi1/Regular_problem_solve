#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , m ; cin >> n >> m ; 
	int ans = 4*m*n;
	int diduction = 0 ; 
	int *a = new int,*b = new int; cin >> *a >> *b ; 
	delete a , b ; 
	a = NULL , b = NULL ;  
	n--;
	while(n--){
		int x , y ; cin >> x >> y ;
		diduction += 2*((m-x)+(m-y)) ;
	}
	cout << ans-diduction << endl ; 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--)solve();
}