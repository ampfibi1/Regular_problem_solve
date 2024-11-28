#include<iostream>
using namespace std; 

int main()
{
	int t ; cin >> t ; while(t--)
	{
		int l , r ; cin >> l >> r ; 
		int cnt = 0 ;
		if(l%2==0)++l;
		if(r&1)++r; 
		cout << int((r-l+1)/4) << endl ; 
	}
}