#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

ll subCombination(ll cnt,ll k){
	return ((cnt - k +1)*(cnt - k +2)/2);
}
void solve(){
	rd(int,n) ; rd(char,ch) ; rd(string,s);
	if(ch=='g'){cout << 0 << endl ; return ; }
	int initial_g = -1 ; 
	for(int i=0; i<n; i++){
		if(s[i]=='g'){
			initial_g = i ;
			break;
		}
	}

	bool pre_ch = false , pre_g = false ;
	int ch_index = -1 ;
	int ans = 0 ;

	for(int i=0; i<n; i++){
		if(s[i]==ch && !pre_ch){
			ch_index = i ;
			// cout << i;
			pre_ch = true ;
			pre_g = false ;
			continue;
		}
		if(s[i]=='g' && !pre_g){
			pre_g = true ;
			if(pre_ch){
				// cout << i ;
				ans = max(ans,i-ch_index);
				pre_ch = false ;
			}
		}
		// cout << " " ;
	} 

	if(pre_ch) ans = max(ans,n-ch_index+initial_g) ;

	cout << ans << endl ;  
}
mt
