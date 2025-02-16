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
	readInt(q);
	int a[n] , sum = 0 ; 
	for(int &x:a) cin >> x ; 

	int pre_sum[n+1] = {} ;
	for(int i=1; i<=n; ++i){
		pre_sum[i] = pre_sum[i-1] + a[i-1];
	}
	// for(int x:pre_sum) cout << x << " " ; 
	// cout << endl ; 
	tt(q){
		readInt3(l,r,k);
		int dif = r-(l-1) ;
		//cout << pre_sum[r] << endl ; 
		//cout << pre_sum[l-1] << endl ;
		//cout << pre_sum[n] << endl ;

		int curr = pre_sum[n] - (pre_sum[r]-pre_sum[l-1]) ; 
		// cout << curr << endl ;  
		if(curr&1){
			if((dif*k) &1) printf("NO\n");
			else printf("YES\n") ; 
		}
		else{
			if((dif*k)&1) printf("YES\n") ; 
			else printf("NO\n") ; 
		}
	}
	
}
int main(){
	readInt(t);tt(t)solve();
}