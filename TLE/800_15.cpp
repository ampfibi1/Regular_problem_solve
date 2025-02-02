#include<iostream>
#include<algorithm>
using namespace std; 

bool isSort(int a[],int &n){
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			return false ;
			break;
		}
	}
	return true ; 
}//if sort return true , else false
int min_distance(int a[],int n){
	int dis = INT_MAX ; 
	for(int i=0; i<n-1; i++){
		dis = min(dis,abs(a[i]-a[i+1])) ;
		// cout << dis << endl ; 
	}
	return dis ; 
}
void solve(){
	int n ; cin >> n ; 
	int a[n] ; 
	for(int &x:a)cin >> x ;
	bool check = isSort(a,n);
	if(check){
		int min_dis = min_distance(a,n);
		cout << min_dis/2+1 << endl ; 
	}
	else cout << 0 << endl ; 
}
int main(){
	int t ; cin >> t ; 
	while(t--)
		solve();
	return 0 ; 
}