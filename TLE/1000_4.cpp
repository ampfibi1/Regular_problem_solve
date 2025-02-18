#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(int,n);
	vector<vector<int>> v ; 

	vector<int> just ; 

	int mn = INT_MAX , second_mn ; 
	ll sum_of_second = 0; 
	for(int i=0; i<n; i++){
		rd(int,m);
		vector<int> temp;  
		for(int j=0; j<m; j++){
			rd(int,x); 
			mn = min(x,mn); 
			temp.push_back(x); 
		}
		sort(temp.begin(),temp.end());
		just.push_back(temp[1]); 
		sum_of_second += temp[1];
		v.push_back(temp); 
	}

	sort(just.begin(),just.end());
	cout << sum_of_second - just[0] + mn  << endl ; 
}
mt
