#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n); rda(int,a);
	int index ; bool f = false ;
	for(int i=1; i<n-1; i++){
		if(a[i-1]<a[i] && a[i]>a[i+1]){
			f = true ;
			index = i ;
			break;
		}
	}
	if(f){
		cout << "YES" << endl ;
		cout << index<< " " << index+1<< " " << index+2 << "" << endl ; 
	}else{
		cout << "NO" << endl ;
	}
	/*cout << (f?"YES":"NO") << endl ; 
	prnt(int,a)*/
}
mt