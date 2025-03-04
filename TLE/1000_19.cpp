#include<bits/stdc++.h>
using namespace std; 

//read and print data
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

//space , new Line 
#define sp " "
#define nl "\n"

//data type define
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<pll>
#define vii vector<pii>
#define vi vector<int>
#define vl vector<ll>
#define mapii map<int,int> 
#define mapll map<ll,ll>
#define mapsi map<string,int>
#define mapci map<char,int>

void solve(){
	ll n;
    cin >> n;
    
    vll arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1; 
    }
    sort(arr.rbegin(), arr.rend());

    ll cost = 0 , cnt = 0 ;
    vl x(n+1,0);
    for(ll i=0; i<n; i++){
    	if(i%2 == 0) cnt++;
    	
    	x[arr[i].second] = (i&1?-cnt:cnt) ;
    	cost +=  2* arr[i].first  * abs(x[arr[i].second]) ;
    }
    cout << cost << nl ; 

    for(auto &xx:x) cout << xx << sp ; 
   	cout << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}