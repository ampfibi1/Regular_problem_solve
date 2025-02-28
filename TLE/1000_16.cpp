#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n); rd(int,r) ; rd(int,b); 
	if(b==1){
		string s1(r/2,'R') ;
		s1 += 'B';
		string s2(r/2,'R') ;
		cout << (r&1?s1 + s2 +'R' : s1 + s2) << endl;  
	}else if(b==2){
		string s1(r/3,'R') ;
		s1 += 'B' ;
		s1 += string(r/3,'R');
		s1 += 'B' ;
		s1 += string(r/3,'R');
		s1 += string(r%3,'R');
		cout << s1 << endl; 
	}

}
mt
