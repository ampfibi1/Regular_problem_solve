//https://codeforces.com/contest/1988/problem/B
#include<iostream>
using namespace std; 

void solve ()
{
	int n ; cin >> n ; 
	string s ; 
	char  last = 'a' ; 
	int zero_cnt = 0 , one_cnt = 0 ; 
	for(int i=0; i<n; ++i)
	{
		char ch ; 
		cin >> ch ; 
		if(last==ch && last == '0') continue;
		s.push_back(ch);
		ch=='0' ? zero_cnt++ : one_cnt++;
		// cout << ch << " " ;
		last = ch ; 
	}
	cout << ((zero_cnt>=one_cnt)?"NO":"YES") << endl ;
}
int main()
{
	int t; cin >> t ; 
	while(t--){solve();}
}