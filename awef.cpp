#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
    int i; char v;
    cin >> i >> v;
    if (s.size() < 4) 
         {cout << "NO\n";return;}
    s[i-1] = v;
    
    if (s.find("1100") != string::npos)
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        while (q--) solve(s);
        
    }
}
