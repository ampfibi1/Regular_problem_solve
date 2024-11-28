//https://codeforces.com/contest/2019/problem/A
#include<iostream>
using namespace std; 

int main()
{
	int t; cin >> t ;
	while(t--)
	{
		int n ; cin >> n ; 
		int arr[n+1] , mx1 = 0,cnt = 0 , mx2 = 0 ,cnt2=0; 
		for(int i=1; i<n+1; ++i)
		{
			cin >> arr[i] ; 
			if(i&1)
			{
				mx1 = max(mx1,arr[i]);
				cnt++;
			}
			else
			{
				mx2 = max(mx2,arr[i]);
				cnt2++;
			}
		} 
		cout << max(mx1+cnt,mx2+cnt2) << endl ; 
	}
}