#include<bits/stdc++.h>
using namespace std; 

int main()
{	
	ios::sync_with_stdio(0);cin.tie(0);
	int t ; cin >> t ; while(t--)
	{
		/*string s = ""; 
		int n ;cin >> n ; 
		bool f = false ; 
		for(int i=0; i<n; ++i)
		{
			char ch ; cin >> ch ;
			if(ch=='A') f=true ; 
			if(f) s.push_back(ch) ;
		}
		cout << s.size()-1 << endl ;*/
		int n ; cin >> n ; 
		string s ; cin >> s ; 
		int ans = n-1 ;
		for(int i=0; i<n; ++i)
		{
			if(s[i]=='B')ans--;
			else break;
		} 
		for(int i=n-1; i>=0; --i)
		{
			if(s[i]=='A')ans--;
			else break;
		}

		cout << (ans>=0 ? ans : 0) << endl ; 
	}
}