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
    rd(ll,a); rd(ll,b); 
    ll cnt = 0 ;
   /* while(a){
        cout << a << sp << b << nl ; 

        if(a%b==0 ){
            b++; 
            cnt++;
            continue;
        }
        a /= b ; 
        cnt++;
    }

    cout << cnt << nl ; 
*/
    ll ans = INT_MAX ;
    for(int i=0; i<=30; i++){
        ll x = a ;
        if(b+i>=2){
            ll turns = i ;
            while(x){
                x /= (b+i) ; 
                turns++;
            }
            cout << turns << sp ;  

            ans = min(turns,ans);
        }
    }
    cout << ans << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}