#include<bits/stdc++.h>
using namespace std; 

vector<vector<int>> subsets(vector<int> &v)
{
	int n = v.size();
	int sub_count = (1<<n) ; 

	vector<vector<int>> sets; 
	for(int mask=0; mask<sub_count; ++mask)
	{
		vector<int> s ; 
		for(int j=0; j<n; ++j)
			if(mask&(1<<j) != 0)
				s.push_back(v[j]);
		sets.push_back(s) ; 
	}
	return sets ; 
}
int main()
{
	int n ; cin >> n ; 
	vector<int> v(n); 
	for(int i=0; i<n; ++i) cin >> v[i] ;

	auto all_sets = subsets(v) ;
	for(auto subset : all_sets)
	{
		for(int ele : subset)
		{
			cout << ele << " ";
		}
		cout << endl ; 
	}
}