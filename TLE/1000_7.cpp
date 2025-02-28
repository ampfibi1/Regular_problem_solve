// /*/*#include<bits/stdc++.h>
// using namespace std; 
// #define mt int main(){ios::sync_with_stdio(0); cin.tie(0);int t ;cin>>t ;while(t--)solve();}
// #define ll long long
// #define rd(type,x) type x ; cin >> x ; 
// #define rda(type,arr) std::vector<type> arr(n); for(type &x:arr) cin >> x ; 
// #define prnt(type,arr) for(type &x:arr) cout << x << " " ; cout << endl ; 

// ll subCombination(ll cnt,ll k){
// 	return ((cnt - k +1)*(cnt - k +2)/2);
// }
// /*void most_consecutive_number(){
// 	//The maximum consecutive occurrences of each unique number
// 	int cons = 0 ; 
// 	for(int i=0; i<n; i++){
// 		cons++; 
// 		if(b[i]!=b[i+1] or i==n-1){
// 			if(consB.find(b[i])==consB.end()) consB[b[i]] = cons;
// 			else consB[b[i]] = max(consB[b[i]],cons) ; 
// 			cons = 0 ; 
// 		}
// 	}

// }*/
// void solve(){
// 	rd(int,n);
// 	int a[n] , b[n] ;
// 	map<int,int > consA,consB ;  
// 	for(int &x:a){ cin >> x;}
// 	for(int &x:b) {cin >> x;}

// 	//for a array
// 	int cons = 0 ;
// 	for(int i=0; i<n; ++i){
// 		cons++;
// 		if(i==n-1 or a[i]!=a[i+1]){
// 			if(consA.find(a[i])==consA.end())
// 				consA[a[i]] = cons;
// 			else
// 				consA[a[i]] = max(consA[a[i]],cons);
// 			cons = 0 ;
// 		}
// 	}

// 	//The maximum consecutive occurrences of each unique number
// 	cons = 0 ; 
// 	for(int i=0; i<n; i++){
// 		cons++; 
// 		if(i==n-1 or b[i]!=b[i+1]){
// 			if(consB.find(b[i])==consB.end()) consB[b[i]] = cons;
// 			else consB[b[i]] = max(consB[b[i]],cons) ; 
// 			cons = 0 ; 
// 		}
// 	}

// 	int ans = 0 ;


// 	for(auto &x: consA)
// 		ans = max(ans,(consA[x.first]+consB[x.first]));
// 	for(auto &x: consB)
// 		ans = max(ans,(consA[x.first]+consB[x.first]));
// /*	for(auto &x:consA){
// 		if(consB.find(x.first)==consB.end()){
// 			ans = max(ans,x.second);
// 		}
// 		else
// 			ans = max(ans,consB[x.first] + x.second) ; 
// 	}*/
// 	cout << ans << endl ; 

// }
// mt
// */*/

#include<iostream>
using namespace std; 

int main(){
	for(int i=1; i<=30; i++){
		int sum = i*(i+1)/2 ; 
		cout << sum << endl; 
	}
}