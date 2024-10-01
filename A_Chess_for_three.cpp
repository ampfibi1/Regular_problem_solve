#include<iostream>
using namespace std; 

void solve()
{
	int p[3] , sum = 0 ; 
	for(auto &x:p) {cin >> x ; sum+=x; }
	cout << ((sum&1) ? -1 : min(p[0]+p[1],sum/2)) << "\n";
}
int main()
{
	int tt; cin>> tt; while(tt--){solve();}
}