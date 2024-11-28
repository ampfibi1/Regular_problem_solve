#include<iostream>
using namespace std; 

int main(){
	int a[] = {4,2,1,3} ;
	int n = 4 ;  
	/*	a[0] = 1 ;
		a[1] = 2 ;
		a[2] = 3 ; 
		a[3] = 4 ; 
	*/ 
	
	int key = 4 ;
	bool flag = false ; 

	for(int i=0; i<=3; ++i){
		if(a[i]==key){
			flag = true ; 
			cout << "Found"; 
			break; 
		}
	} 

	if(b==false) 
		cout << "Not Found" ;

	return 0 ; 
	
}