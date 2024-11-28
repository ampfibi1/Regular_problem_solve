#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int xc,yc,k ; cin >> xc >> yc >> k ; 
    if(k&1){
        cout << xc << " " << yc << endl ;  
    }
    for(int i=1; i<=k/2; ++i){
        cout << xc-i << " " << yc-i << endl ;
        cout << xc+i << " " << yc+i << endl ;
    }
    cout << endl ; 
    return ; 
}
                                                                             
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}