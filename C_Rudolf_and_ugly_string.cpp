#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int odd = (n&1?n:n-1);
	if(n<=4){
		cout << -1 << endl ; return ; 
	}
	vector<int> v;
	for(int i=1; i<=n; i+=2)
		v.push_back(i); 
	int val = (n&1?n-1:n); 
	for(int i=2; i<n; i+=2){
		if((odd+i)%3==0){
			val = i ; 
			break; 
		}
	}
	for(int i=val; i>=2; i-=2)
		v.push_back(i);
	for(int i=val+2; i<=n; i+=2)
		v.push_back(i);
	for(int x:v) cout << x << " ";
	cout << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--)solve();
}