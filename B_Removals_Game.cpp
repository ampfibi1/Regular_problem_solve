//https://codeforces.com/contest/2002/problem/B
#include<bits/stdc++.h>
using namespace std; 

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    bool same = true, reverseSame = true;
    
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) same = false;
        if(a[i] != b[n-1-i]) reverseSame = false;
        // if(!same && !reverseSame) break;
    }

    cout << (same || reverseSame ?  "Bob\n" : "Alice\n" ) ;
  
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; while(t--)solve();

    return 0;
}
