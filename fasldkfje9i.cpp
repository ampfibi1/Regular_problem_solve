#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int x , y , k ; 
    cin >> x >> y >> k ;
    int ax , ay , bx , by , cx , cy , dx , dy ;
    ax = ay = bx = by = cx = cy = dx = dy = 0 ;
    // cout <<(x<=k && y<=k) << endl ;     
    if(x>=k && y>=k){
        bx = dy = k ;   
    }  
    cout << ax << " "<< ay << " "<< bx<< " " << by << endl ;
    cout << cx << " "<< cy << " "<< dx<< " " << dy << endl ; 
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
       solve();
    }

    return 0;
}
