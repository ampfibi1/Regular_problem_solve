#include <iostream>
using namespace std;

void solve() {
    int n ; cin >> n ;
    //sequence should be ai < ai+1
    //      ai % i != aj % j 
    //ai%i = ai-1
    for(int i=1; i<2*n; i+=2)
        cout << i << " " ;
    cout << endl ;   
}
int main() {
    int t ; cin >> t ; while(t--)solve();
    return 0;
}
