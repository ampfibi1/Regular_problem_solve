#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    int countOnes = 0, countZeros = 0;

    for (int &x : arr) {
        cin >> x;
        if (x == 1) countOnes++;
        if (x == 0) countZeros++;
    }

    cout << (countZeros == 0 ? countOnes : countOnes * (1LL << countZeros)) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
