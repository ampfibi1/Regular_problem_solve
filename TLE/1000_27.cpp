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

string llToStr(ll n){
    string s; 
    while(n){
        s.push_back(char((n%10)+48));
        n /= 10;
    }
    return s ;
}
vector<int> split(ll s){
    string str = llToStr(s);
    int a[10] = {};
    vector<int> test;
    for(char &x:str){
        if(a[x-48]==0 && (x-48)>1){       
            test.push_back(x-48),a[x-48]++;
        } 
    }
    return test ;
}
void solve(){
   /* rd(string,s);
    // cout << s << nl ;
    int a[10] = {}; 
    // string new_s ; 
    vector<int> v;
    for(char &x:s){
        if(a[x-48]==0 && (x-48)>1){       
            v.push_back(x-48),a[x-48]++;
        } 
    }
    if(!v.size()){
        cout << s << nl ; 
        return ; 
    }
    sort(v.begin(),v.end());
    for(auto x:v) cout << x << sp ; 
    cout << nl ; 

    vector<int> all_max;

    for(int i=0; i<v.size(); i++){

    }*/

    // cout << new_s << nl ;

    /*
        286
        2872
    */
     // n +=  (8-n%8) ;
    // cout << n % 8 << nl ;
     // cout << n+(2520-n%2520) << nl ; 

    rd(ll,n);
    // cout << n << nl ; 
    while(true){
        vector<int> v = split(n);
        bool f = true;
        for(int i=0; i<v.size(); i++){
            // cout << v[i] << sp ; 
            if(n%v[i]!=0){
                // n++; 
                // cout << n << nl ; 
                f = false;
                break;
            }
        }
        // cout << nl ; 
        if(f) break;
        else n++;
        // break;
    } 
    cout << n << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}