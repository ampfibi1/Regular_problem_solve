#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int x , y , k ; 
    cin >> x >> y >> k ;
    cout<<0<<" "<<0<<" "<<min(x,y)<<" "<<min(x,y)<<endl;
	cout<<min(x,y)<<" "<<0<<" "<<0<<" "<<min(x,y)<<endl; 
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
       solve();
    }

    return 0;
}
