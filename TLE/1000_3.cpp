#include<bits/stdc++.h>
using namespace std; 
#define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
#define ll long long
#define rd(type,x) type x ; cin >> x ; 
#define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
#define printa(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

void solve(){
	rd(ll,n); rd(ll,cost);
	ll a[n] , b[n]; 
	for(ll &x:a) cin >> x;  
	for(ll &x:b) cin >> x;  

	vector<pair<ll,ll>> capiCost ; 
	for(ll i=0; i<n; i++){
		pair<ll,ll> x ; 
		x.first = min(cost,b[i]) ; 
		x.second = a[i]; 
		capiCost.push_back(x);
	} 
	sort(capiCost.begin(),capiCost.end()); 

	ll ans = cost ;
	ll person = n - 1 ; 
	for(ll i=0; i<n-1; i++){
		ans += min(capiCost[i].second,person) * capiCost[i].first ; 
		person -= min(capiCost[i].second,person) ; 
	}

	cout << ans << endl ;                    

	/*if(capiCost[0].first>cost)
	{
		cout << n*cost << endl ; 
		return ; 
	}
	
	int index = -1 ;
	int size = n ;

	{
		ll sum = 0 , takenvalue = 0 ; 
		for(int i=0; i<size; i++){
			sum+= capiCost[i].second ;
			takenvalue++;
			if(size - sum - takenvalue <=0){
				index = i ;
				break;
			}
		}
	}*/
	// cout << index << endl;  
/*
	int sz = size - index - 1 ; 
	int ans = (index+1)*cost ;

	for(int i=0; i<=index; i++){
		if(sz<0) break;
		if(capiCost[i].second<=sz){
			ans += (capiCost[i].first*capiCost[i].second);
			sz -= capiCost[i].second;
		}
		else{
			ans += (sz*capiCost[i].first);
			break;
		}
	}
	cout << ans << endl ;*/
}

mt