#include<iostream>
using namespace std; 
/*
int fibo(int n){
	if(n<=1) return n ;
	else return fibo(n-1)+fibo(n-2);
}
int main(){
	int n ; cin >> n ; 
	cout << fibo(n) ;
}*/
int main(){
	int fib[10] = {-1} ;
	for(int i=0; i<10; ++i)
		cout << fib[i] << " " ; 
	cout << endl ; 
}