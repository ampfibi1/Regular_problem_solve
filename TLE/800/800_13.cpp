#include<iostream>
using namespace std; 

void solve(){
	int a, b, c ; cin >> a >> b >> c ; 
	if(c%2==0)
		cout << (a>b?"First":"Second") << endl ;
	else
		cout << (b>a?"Second":"First") << endl ; 

	/*int difrence = abs(a-b) ; 
	if(difrence>c || !c){
		cout << (a==max(a,b)?"First":"Second") << endl ; 
	}
	else{
		int x = min(a,b), y=max(a,b) , z = c ; 
		z -= difrence ;
		x += difrence ;
		cout << (x==y&&(z&1)?"First":"Second") << endl ;
	}*/
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}