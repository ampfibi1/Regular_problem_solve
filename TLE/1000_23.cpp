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
void solve(){
    rd(ll,d);
    // if(d<3){
        // ll mul = 1;
        // for(ll i=1,j=1; j<=3; i+=d,j++){
            // mul *=i ;
        // } cout << mul << nl ; 
        // return;
    // }
    // cout << (d+1)*4 << nl ; 
    /*ll mul = 1;
    for(ll i=1,j=1; j<=3; i+=d,j++){
        cout << i << nl ;
        mul *=i ;
    }
    cout << mul << nl ; */

    ll p = nextPrime(1+d);
    ll q = nextPrime(p+d);

    cout << min(p*q,p*p*p) << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}