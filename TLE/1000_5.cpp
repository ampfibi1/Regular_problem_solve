#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n); rd(int,ability) ;

	vector<pair<int,int>> ar ;
 
	for(int i=0; i<n; i++){
		int x ; cin >> x ;
		// ar.push_back({(!(x%ability)?ability:x%ability),-i}) ; 
		if(!(x%ability)) ar.push_back({ability,-i}); 
		else ar.push_back({x%ability,-i}); 
		
	}
	
	sort(ar.begin(),ar.end()); 

	for(int i=n-1; i>=0; i--){
		cout << abs(ar[i].second) + 1 << " "; 
	}
	cout << endl ; 
}
mt
