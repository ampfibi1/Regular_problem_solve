#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rdl ll n ; cin >> n ;
#define rdi int n ;cin >> n ; 
#define rda(n) int a[n] ; for(int &x:n) cin >> x ; 

void solve(){
	rdl ;
	if(n&1){printf("YES\n"); return ;}
	bool f = false ; 
	while(n%2==0){
		n/=2 ;
	}
	if(n>1) f = true ;
	cout << (f?"YES":"NO") << endl ; 
}

mt