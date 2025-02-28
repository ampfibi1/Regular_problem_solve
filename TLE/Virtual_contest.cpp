#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

//A
/*void solve(){
	rd(int,n); rd(int,k); rd(int,p); 
	k = abs(k);
	if(p*n<k) cout << -1 << endl; 
	else cout << k/p + (k%p==0?0:1) << endl; 
	
}*/
//B
ll subCombination(ll cnt,ll k){
	return ((cnt - k +1)*(cnt - k +2)/2);
}
void solve(){

}
mt
