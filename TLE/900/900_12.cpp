#include<bits/stdc++.h>
using namespace std; 
#define readInt(n) 		   int n ; cin >> n ; 
#define readStr(n) 		   string n ; cin >> n ; 
#define loop(n) 		   for(int i=1; i<n; i++)
#define print(n)		   cout << n << endl ; 
#define tt(t)  			   while(t--) 
#define a(n) 			   int a[n] ; for(int &x:a) cin >> x ; 
#define readInt3(l,r,k)    int l , r , k ; cin >> l >> r >> k; 

void solve(){
	readInt(n); 
	a(n);
	int mx = a[n-1] - a[0] ; 
	for(int i=0; i<n-1; i++){
		mx = max(mx,a[n-1]-a[i]); 
	}
	for(int i=1; i<n; i++){
		mx = max(mx,a[i]-a[0]);
	}
	for(int i=0; i<n-1; i++){
		mx = max(mx,a[i]-a[i+1]) ; 
	}
	cout << mx << endl ; 
}
int main(){
	readInt(t);tt(t)solve();
}