#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

int main(){
	rd(int,n);rd(int,D); rda(int,a); 
	sort(a.begin(),a.end());
	int x ; 
	int i = 1;
	int cnt = 0 ;
	while(n>0){
		int last = a.size()-i++;
		x = D/a[last] + 1 ;
		n -= x ; 
		cnt++;
	}
	if(n<0) --cnt ;
	cout << cnt << endl ; 
}
