#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,x) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 

void solve(){
	rd(int,n); rd(int,x);
	int a[n] ; 
	ll mx_sum = 0 , not_divisible = 0 , divisible = 0; 
	for(int &y:a){
		cin >> y; 
		mx_sum += (y%x==0?(y/x):(y/x)+1) ;
		if(y%x!=0) not_divisible += y;
		if(y%x==0) divisible +=y ; 
	}
	ll mn_sum = divisible/x + 
		(not_divisible%x==0?(not_divisible/x):(not_divisible/x)+1) ;

	cout <<mn_sum << " " <<  mx_sum << endl ; 
}
mt