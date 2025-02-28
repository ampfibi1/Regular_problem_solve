#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 


//A
// void solve(){
// 	int k ; cin >> k ; 
// 	if(k==1) cout << "YES\n" ; 
// 	else if((k-1)%3==0) cout << "YES\n" ; 
// 	else cout << "NO\n" ; 
// }
//B
bool isFractional(double n) {
    return n != trunc(n);
}
void solve(){
	rd(ll,n);
	int sum = n*(n+1)/2 ;
	double root = sqrt(sum) ; 

	if(!isFractional(root)) {cout << -1 << endl; } 
	else {
		
	} 
}
mt
