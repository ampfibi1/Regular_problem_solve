#include<iostream>
using namespace std; 

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--) {
			int n , k ; cin >> n >> k ; 
		if(n>=k){
			cout << (k>0?1:0) << endl ;
			continue ; 
		}
		k -= n ; 
		int cnt = 1, p = n-1;
		while(k>0){
			k -= p ; cnt++;
			if(k<=0)break;
			k-= p ; cnt++;
			p--;
		}
		cout << cnt << endl ;
	}
}