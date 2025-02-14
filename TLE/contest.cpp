#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define tt int t; cin >> t; while(t--) solve();
/*const int n=2e5+5;
int a[n];*/

void solve(){
/*const int n=2e5+5;
int a[n],b[2];*/
/*
	a[0]= INT_MIN ; a[n+1] = INT_MAX ;
	for(int i=1; i<=n; i++) cin >> a[i];

	int b ; cin >> b ; 
	
	bool f = false ;
	for(int i=1; i<=n; ++i){
		int x = a[i] ; 
		a[i] = b - x ; 
		if(a[i]<a[i-1] || a[i]>a[i+1]) a[i] = x ; 
		if(is_sorted(a+1,a+n+1)){
			f = true ; 
			break;
		}
	} 
	cout << (f?"YES\n":"NO\n");
	int b ; 
	cin>>b; 
	a[1]=min(a[1],b-a[1]);

	int f = 0 ; 
	for(int i=1;i<n;i++){
		if(a[i]>min(a[i+1],b-a[i+1]))
			if(a[i]>max(a[i+1],b-a[i+1])){
				f=1;break;
			}
			else a[i+1]=max(a[i+1],b-a[i+1]);
	}
		if(f==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
*/
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;++i) cin>>a[i];
	int b ; cin>>b;
	
	a[1]=min(a[1],b-a[1]);

	for(int i=2;i<=n;++i){
		a[i]=min(a[i],b-a[i]);

		if(a[i]<a[i-1])  a[i]=b-a[i];
	
		if(a[i]<a[i-1]){
			 cout<<"NO\n";
			 return;
		}
	}
	cout<<"YES\n";
}
int main(){
	tt 
}