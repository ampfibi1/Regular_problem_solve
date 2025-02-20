#include <bits/stdc++.h>
using namespace std; 

#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();} 
#define ll long long
#define rd(type, x) type x; cin >> x;
#define rda(type, arr, n) vector<type> arr(n); for(type &x: arr) cin >> x;
#define prnt(type, arr) for(type &x: arr) cout << x << " "; cout << endl; 

ll myMax(ll a, ll b) { return a > b ? a : b; }

void solve() {
    rd(int, n); rd(int, m); 

    vector<vector<int>> v(n,vector<int>(m,0)) ; 
    map<int,int> mp;

    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> v[i][j] ;
    		mp[v[i][j]] = 1 ;
    	}
    }
    for(int i=0; i<n; i++){
    	for(int j=1; j<m; j++){
    		if(v[i][j] == v[i][j-1])
    			mp[v[i][j]] = 2 ;
    	}
    }
    for(int i=1; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(v[i][j] == v[i-1][j])
    			mp[v[i][j]] = 2 ; 
    	}
    }

    ll mx = -1 , ans = 0;
    for(auto &x:mp){
    	ans += x.second ;
    	mx = myMax(mx,x.second);
    }

    cout << ans - mx << endl ; 
/*
    vector<vector<int>> a(n + 2, vector<int>(m + 2, 0));
    unordered_map<int, int> color;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int x; cin >> x; 
            a[i][j] = x;
            color[x]++;
        }
    }

    map<int, int> ans; 

    for(auto &entry: color) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if ((i > 1 && a[i][j] == a[i-1][j]) || 
                    (j > 1 && a[i][j] == a[i][j-1]) ||
                    (i < n && a[i][j] == a[i+1][j]) || 
                    (j < m && a[i][j] == a[i][j+1])) {
                    ans[a[i][j]] = 2;
                }
            }
        }
    }

    for(auto &entry: color) {
        if(ans.find(entry.first) == ans.end()) {
            ans[entry.first] = 1;
        }
    }

    ll sum = 0, mx = -1;
    for(auto &entry: ans) {
        sum += entry.second;
        mx = myMax(mx, entry.second);
    } 

    cout << sum - mx << endl;*/
}

mt
