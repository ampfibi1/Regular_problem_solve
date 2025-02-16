#include<bits/stdc++.h>
using namespace std; 
#define readInt(n) int n ; cin >> n ; 
#define readStr(n) string n ; cin >> n ; 
#define  loop(n) for(int i=1; i<n; i++)
#define print(n) cout << n << endl ; 

void solve(){
	readInt(n);
	readStr(s);
	int cnt = 1 , ans = 1 ;  
	loop(n){
		if(s[i]!=s[i-1]) cnt = 1 ; 
		else cnt++;
		ans = max(ans,cnt);
	}  
	print(ans+1); 
}
int main(){
	readInt(t); while(t--) solve();
}
