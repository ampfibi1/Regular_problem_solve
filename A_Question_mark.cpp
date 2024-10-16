//https://codeforces.com/contest/1993/problem/A
#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int t; cin >> t ;
	while(t--)
	{
		int n ; cin >> n ; 
		map<char,int> m ; 
		string s ; cin >> s ; 
		for(int i=0; i<s.size(); ++i){
			char x = s[i];
			m[x]++;
		}

		bool f=false ;
		int sum = 0 ; 
		for(auto x:m){
			if(x.first=='?' && x.second==s.size()) {
				f=true; 
				break;
			}
			if(x.first!='?' && x.second<=n)
				sum+=x.second ;
			if(x.first!='?' && x.second>n)
				sum+=n; 
		}

		cout << (f?0:sum) << endl;
	}
}