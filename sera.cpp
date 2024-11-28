#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , qx , qy ; cin >> n >> qx >> qy ; 
	int x = 0 , y = 0 ; 
	cin.ignore(0);
	string s ; cin >> s ; 
	for(int i=0; i<10; ++i){
		for(int i=0; i<n; ++i){
		if(s[i]=='N')
			y++;
		else if(s[i]=='E')
			x++;
		else if(s[i]=='S')
			y--;
		else
			x--;

		if(qx==x && qy==y){
				cout << "YES\n" ; return ; 
		}
	} 
	}
	cout << "NO\n" ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve(); 
}