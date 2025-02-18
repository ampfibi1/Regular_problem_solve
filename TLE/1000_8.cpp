#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll max(ll a, ll b) {
    return a > b ? a : b;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<char> left, right;
    vector<int> freq(26, 0);
    
    // Initialize right set with all unique characters
    for (char c : s) freq[c - 'a']++;

    ll ans = 0;

    // Iterate and move characters from right to left
    for (int i = 0; i < n - 1; i++) {
        left.insert(s[i]);
        freq[s[i] - 'a']--;

        if (freq[s[i] - 'a'] == 0) {  // Remove character from right set
            right.erase(s[i]);
        }

        ans = max(ans, left.size() + count_if(freq.begin(), freq.end(), [](int x) { return x > 0; }));
    }

    cout << ans << endl;
}
 int main(int argc, char const *argv[])
{
	int t ; cin>>t ; while(t--)solve();
	return 0;
}