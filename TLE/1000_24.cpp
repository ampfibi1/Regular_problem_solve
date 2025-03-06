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

ll nextPrime(ll n){
    for(ll i=n;;i++){
        bool f=true;
        for(ll j=2; j*j<=i; j++){
            if(i%j==0){
                f=false;
                break;
            }
        }
        if(f)return i;
    }
    return 0;
}
ll min(ll a,ll b){
    return a>b?b:a;
}
void solve(){
    rd(ll,n); rd(ll,m);
    ll negCnt = 0 ,mn = INT64_MAX ,sum = 0 ;
    ll mnNeg = INT64_MAX;
    for(int i=0; i<n*m; i++){
        rd(ll,x);
        if(x<0){ negCnt++;
            mnNeg = min(mnNeg,abs(x));
        }else mn = min(mn,x);
        sum += abs(x) ;
    }
    if(negCnt&1){
        cout << sum-min(mn,mnNeg)*2 << nl ;
    }else cout << sum << nl ;

    // cout << mn << sp << sum << nl  ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}