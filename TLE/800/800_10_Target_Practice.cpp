#include<iostream>
using namespace std; 

void solve(){
	// {(0,0-9),(9,0-9),(0-9,0),(0-9,9)}
	// {(1,1-8),(8,1-8),(1-8,1),(1-8,8)}
	// {(2,2-7),(7,2-7),(2-7,2),(2-7,7)}
	// {(3,3-6),(6,3-6),(3-6,3),(3-6,6)}
	// {(4,4-5),(4,4-5),(4-5,4),(4-5,5)}
	int a[10][10] ;
	int k = 9 ; 
	for(int i=0; i<=4; ++i){
		for(int j=i; j<=k; ++j){
			a[i][j] = i+1;
			a[k][j] = i+1;
			a[j][i] = i+1;
			a[j][k] = i+1;
		}
		k--;
	} 
	int cnt = 0 , t=10; 
	for(int i=0; i<10; ++i){
		for(int j=0; j<10; ++j){
			char x ; cin >> x ; 
			if(x=='X')cnt+=a[i][j] ;
		}
	}
	cout << cnt << endl ; 
}
int main(){
	int tt ; cin >> tt ; 
	while(tt--) solve(); 
	return 0 ; 
}