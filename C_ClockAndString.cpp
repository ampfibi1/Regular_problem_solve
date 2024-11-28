#include<iostream>
using namespace std; 

void solve(){
	int a , b , c , d ; 
	cin >> a >> b >> c >> d ;
	int x,y,p,q ; 
	bool f = false ; 
	if(abs(a-b)<abs(c-d)){
		x=min(a,b) ;
		y=max(a,b) ;
		p=c;q=d;
	}
	else{
		x = min(c,d) ;
		y = max(c,d) ;
		p = a ; q = b ; 
	}
	for(int i=x; i<y; ++i){
		if(p==i || q==i){
			f=true; 
			break; 
		}
	}
	cout << (f?"YES\n":"NO\n") ;
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}