#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define tt int t; cin >> t; while(t--) solve();

void solve() {
    ll a, b, c; 
    cin >> a >> b >> c; 
    bool f = false ;
    if((2*b-c)%a==0)
    	if((2*b-c)/a>0) f = true ;
    if((2*b-a)%c==0)
    	if((2*b-a)/c>0) f = true ;  
    if((c+a)%(2*b)==0) f = true;
    if(a==b && b==c) f = true ;
    cout << (f?"YES\n":"NO\n") ; 
}

int main() {
    tt
}
