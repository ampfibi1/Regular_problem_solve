<<<<<<< HEAD
/*
https://codeforces.com/contest/2004/problem/B
#include<iostream>
using namespace std; 

void solve(){
	int al,ar,bl,br ; cin >> al >> ar >> bl >> br ; 
	if(ar<bl || al>br)cout << 1 << endl ;
	else if(al==bl && ar!=br || ar==br && al!=bl) cout <<  min(ar,br)-max(al,bl) + 1<< endl ; 
	else if(al!=bl && ar!=br) cout <<  min(ar,br)- max(al,bl) + 2 << endl ;
	else if(al == bl && ar == br) cout <<  br-al << endl ;  
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}*/
#include<iostream>
using namespace std; 

void solve(){
	int al, ar, bl, br; 
	cin >> al >> ar >> bl >> br;
	
	if (ar < bl || al>br) cout << 1 << endl;
	else if (al == bl && ar == br) cout << br - al << endl;
	else cout << min(ar, br) - max(al, bl) + (al != bl && ar != br ? 2 : 1) << endl;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t; 
	while(t--) solve();
}
=======
/*
https://codeforces.com/contest/2004/problem/B
#include<iostream>
using namespace std; 

void solve(){
	int al,ar,bl,br ; cin >> al >> ar >> bl >> br ; 
	if(ar<bl || al>br)cout << 1 << endl ;
	else if(al==bl && ar!=br || ar==br && al!=bl) cout <<  min(ar,br)-max(al,bl) + 1<< endl ; 
	else if(al!=bl && ar!=br) cout <<  min(ar,br)- max(al,bl) + 2 << endl ;
	else if(al == bl && ar == br) cout <<  br-al << endl ;  
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}*/
#include<iostream>
using namespace std; 

void solve(){
	int al, ar, bl, br; 
	cin >> al >> ar >> bl >> br;
	
	if (ar < bl || al>br) cout << 1 << endl;
	else if (al == bl && ar == br) cout << br - al << endl;
	else cout << min(ar, br) - max(al, bl) + (al != bl && ar != br ? 2 : 1) << endl;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t; 
	while(t--) solve();
}
>>>>>>> 886374bab59f2a2be1cbd0f6c74004cf0c51dec5
