#include<iostream>
using namespace std; 

int binary_exp(int a,int b){
	int ans = 1 ;
	while(b){
		if(b&1)
			ans *= a ;
		a *= a ;
		b >>=1 ;  
	}
	return ans ; 
}
int main(){
	cout << binary_exp(4,2) << endl ; 
}