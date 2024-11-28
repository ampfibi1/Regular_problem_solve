#include<bits/stdc++.h>
using namespace std; 

void solve(){
	string s ; cin >> s ; 
	int n = s.size(); 
	string  b(n,'(') , a ;
	b+= string(n,')');
	for(int i=0; i<n; ++i)
		a+="()";

	if(a.find(s)==string::npos)
		cout << "YES\n" << a << endl ; 
	else if(b.find(s)==string::npos)
		cout << "YES\n" << b << endl ; 
	else
		cout << "NO\n" ; 
	
}
int main(){
	int t ; cin >> t ; while(t--){
		solve();
	}
}