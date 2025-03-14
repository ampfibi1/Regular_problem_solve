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
    rd(ll,x); rd(ll,y); rd(ll,k); 
    ll ans = k*y + k ;
    if(x==2)
        cout << ((k*y+k)-1 + k)<< nl ;
    else if(ans>(ans/(x-1))*(x-1)+1) 
        cout << ans/(x-1) + 1 + k << nl ;
    else 
        cout << ans/(x-1)+k << nl ;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}