#include<iostream>
using namespace std; 

int main(){
	int n = 3 , k = 3 , x = 1 ;
	if(n==k&& x==1) {
		cout << "YES\n" << 1 << endl  << n << "\n"; 
	}
	else{


	bool c = false ; 
	int dif ; 
	int times , val ;  
	for(int i=x+1; i<=k; ++i){
		dif = n - (int(n/i)*i) ; 
		cout << dif << endl ; 
		if(dif>x && dif<k){
			c = true ; 
			times = i ; 
			val = n/i ; 
			break;
		}
	}
	if(c){
		cout << "YES\n" << times+1 << endl ; 
		cout << dif << " " ; 
		for(int i=0; i<times; ++i)
			cout << val << " ";
		cout << endl ; 
	}
	else cout << "NO\n" ;
	} 
}