#include<bits/stdc++.h>
using namespace std; 
#define ll long long

int __step(ll n){
	int cnt = 0 ; 
	while(n>5){
		cnt++;
		n = n / 4 ; 
	}
	return cnt ; 
}
int main(){
	ll n = 1;
	cout << (1<<__step(n)) << endl ; 
}