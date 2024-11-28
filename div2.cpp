#include<iostream>
#include<vector>
using namespace std; 

void solve(){
	int n , m , v ; cin>> n >> m >> v;
	vector<int> a(n+1,0);
	for(int i=1; i<=n; ++i){int x ; cin >> x ; a[i]=a[i-1]+x;}

	int value = ((n+(m))/(m+1)) ;
	cout << value << endl ;  
	for(auto x:a) cout << x << " ";

	vector<int> v ; 
	int l = 0 ;
	int r = 
	for(int i=0; i<=m; ++i){
		int sum = a[]
	}
	cout << endl ; 
	cout << a[r]-a[l] << endl ; 
	int ans = 0 ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}