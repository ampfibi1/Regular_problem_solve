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
    rd(string,a); rd(string,b); 
    
    int a_s = a.size();
    int b_s = b.size();
    // cout << a << sp << a.size() << endl ;
    // cout << b << sp << b.size() << endl ; 

    /*int cnt = 0 ,mx = 0; 
    for(int i=0; i<a_s; i++){
        for(int j=0; j<b_s; j++){
            if(a[i]==b[j]){
                cnt = 1 ;
                for(int k=i+1,l=j+1; k<a_s,l<b_s; k++,l++){
                    if(a[k]==b[l]){
                        cnt++;
                    }
                    else{
                        k=i+1;
                        cnt=1;
                    }
                    mx = max(cnt,mx);

                }
            }

        }
    }
    // cout << mx << endl ; */

    //Lcs
    vector<vector<int>> dp(a_s+1,vector<int>(b_s+1,0)); 
    int mx = 0 ;

    for(int i=1; i<=a_s; i++){
        for(int j=1; j<=b_s; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1 ;
                mx = max(mx,dp[i][j]);
            }
        }
    }
    // cout << mx << endl ; 
    cout << a_s-mx+b_s-mx << nl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin>>t ;while(t--)solve();
}