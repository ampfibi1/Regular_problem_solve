//https://codeforces.com/contest/2028/problem/B
#include<iostream>
using namespace std; 
#define ll long long 

/*void solve(){
	ll n , b , c ; 
	cin >> n >> b >> c ; 
	if(c<n-2 && !b ) cout << -1 << endl ;
	else if((c==n-1 || c==n-2) && !b ) cout<<n-1 << endl ;
	else if(c>=n && !b) cout << n << endl ; 
	else{
		ll l = 1 ; 
		ll r = n ;
		ll index = 0 ; 
		while(l<=r){
			ll mid = (l+r)>>1 ; 
			ll val = b * (mid-1) + c ;
			if(val==(n-1))
				index = mid ; 
			if(val<(n-1))
				l=mid+1;
			else 
				r = mid-1 ; 
		}
		cout << (n-index) << endl ; 
	}
}*/
//from youtube turorial 
void solve(){
	ll n , b , c ; cin >> n >> b >> c ; 
	if(!b){
		/*
ai=b(i-1)+c --> a1=c ,a2=c+b, a3=c+2b , a4=c+3b , an=c+(n-1)b
			a[n] = {c,c+b,c+2b,c+3b,c+(n-1)b}
			if b = 0 
			a[n] = {c,c,c,c}(n time)
			n = 5 --> permutation a[5] = {0,1,2,3,4} 
			b = 0 
			c = 3
			a[5] = {3,3,3,3,3}
				-->{0,1,2,3,4}(replace n-1 time)

			n = 3 ; b = 0 ; c = 1; a[3] = {1,1,1}
			---->{0,1,1}-->{0,(1,2,1,2,1,2,1,2,1),1} ans = -1

			n>=c 
			n=5; b=0; c=6; a[5] = {6,6,6,6,6}
			-->{0,1,2,3,4,5} (answer is 5=n) 
		*/
		if(c<n-2)cout << -1 << endl ; 
		else if (c==n-1 || c==n-2) cout << n-1 <<endl ; 
		else cout << n << endl ; 
		return ;
	}
	/*
		rang of value in array = n-1-(c-1) = n - c
		no of value in array = ceil of[(n-c)/b] ; 
		total no need = n - ceil of[(n-c)/b] ;
		ceil of [(n-c)/b] = floor of (n-c+b-1/b) ; 

		***
		ceil(x/y) = floor((x+y-1)/y)
	*/
	cout <<  n - max((n-c+b-1)/b,0LL) << endl ; 
}
int main(){
	int t; cin >> t ; while(t--)solve();
}