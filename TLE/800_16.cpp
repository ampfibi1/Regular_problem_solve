#include<iostream>
using namespace std; 

void solve(){
	int n , k , x ; cin >> n >> k >> x ; 
	if(x!=1){
		cout << "YES\n" << n << "\n";
		for(int i=0; i<n; i++)cout << 1 << " " ; 
		cout << endl ; 
		return ; 
	}
	if(	k==1){cout << "NO\n" ; return;}
	else{
		if(n%2==0){
			cout << "YES\n" << n/2 << endl;
			for(int i=0; i<n/2; ++i)cout << 2 << " " ; 
			cout << endl ; 
		}
		else{
			if(k>=3){
				cout << "YES\n" << n/2<<endl ;
				cout << 3 << " " ; 
				for(int i=0; i<n/2-1;++i)cout << 2 << " " ; 
					cout << endl ; 
			}
			else cout << "NO\n" ; 
		}
	}
}

int main(){

	int t ; cin >> t ; while(t--) solve();
}