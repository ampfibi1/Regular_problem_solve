#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,x) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 

void solve(){
	rd(int,n); rd(int,x);
	int s_z = n*x ;  
	int a[s_z] ; for(int &x:a) cin >> x ; 
	sort(a,a+s_z);
	int median = (n%2==0? n/2:(n/2)+1) ; 
	ll sum = 0 ;
	if(median<2){
		for(int i=0; i<s_z; i+=n) sum+=a[i];
	}else{
		int increment = n - (median-1) ;
	/*	cout <<s_z-increment<< endl ; 
		cout <<s_z-increment-increment<< endl ; */
		for(int i=s_z-increment, j=x;  j>0; j--,i-=increment){
			// cout << a[i] << " " ;
			sum += a[i] ;
		}
		/*cout << endl ; 
		return ; */
	}
	cout << sum << endl; 
}
mt