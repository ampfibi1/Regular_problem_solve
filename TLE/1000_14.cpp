#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sq(x) (x)*(x)
#define PI acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl '\n'
#define mod 1000000007

typedef long long int ll;
typedef unsigned long long int llu;

bool prime(int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ar(n), br(n);
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        br[i] = i + 1;
    }
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            v.push_back(br[i + 1]);
            swap(br[i], br[i + 1]);
            mp[i]++;
            mp[i + 1]++;
        } else {
            if (mp[i] != 0) {
                v.push_back(br[i]);
            } else {
                ans = 1;
                break;
            }
        }
    }
    
    if (mp[n - 1] != 0) v.push_back(br[n - 1]);
    else ans = 1;
    
    if (ans == 1) cout << "-1" << endl;
    else {
        for (int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
}

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) solve();
}
