#include<iostream>
using namespace std; 

int main(){
	int t ; scanf("%d",&t) ;
	while(t--){
		int x, k ; 
		scanf("%d%d",&x,&k) ;
		if(x%k!=0){
			cout << 1 << endl ;
			cout << x << endl ; 
		}
		else{
			cout << 2 << endl ; 
			cout << x-1 << " " << 1 << endl ; 
		}
	}
	return 0 ; 
}