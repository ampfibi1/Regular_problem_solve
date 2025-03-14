/*#include<bits/stdc++.h>
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
    rd(ll,n);
    mapll m;
    for(int i=0; i<n; i++){
        rd(ll,x);
        m[x]++;
    }
    bool f = false ;
    for(auto &x:m){
        if(x.second>1) f=true ;
    }
    cout << (f?"YES":"NO") << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}*/
#include <bits/stdc++.h>
using namespace std;

string to_Upper(string& s){
    for(char &x:s) x = toupper(x);
    return s;
}
string toSetUpper(string& s){
    s[0] = (s[0]>96?toupper(s[0]):tolower(s[0]));
    for(int i=1; i<s.size(); i++) s[i] = tolower(s[i]);
    return s;
}
int main() {
    string s; cin >> s ;
    bool sameAsPre =false;
    for(int i=1; i<s.size(); i++){
        if(s[i]>96){ sameAsPre = true; break;}        
    }
     cout <<  (sameAsPre?s:toSetUpper(s)) << endl ;
    
    return 0 ;
}