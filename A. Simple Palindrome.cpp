//https://codeforces.com/contest/2005/problem/A
#include<iostream>
#include<algorithm>
using namespace std; 

int main()
{
	int t ; cin >> t ; 
	while(t--)
	{
		int n ; cin >> n ; 
		string vowel = "aeiou" , res = ""; 
		int vow_sequence = n/5; 
		int rem = n%5; 
		while(vow_sequence--)
			res+=vowel; 
		for(int i=0; i<=rem; ++i)
			res+=vowel[i] ; 
		sort(res.begin(),res.end()); 
		cout << res << endl ; 
	}
}