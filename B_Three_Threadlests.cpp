//https://codeforces.com/contest/1881/problem/B
#include<iostream>
using namespace std; 

void solve()
{
	int a, b , c; cin >> a >> b >> c ; 
	if(a==b && b==c){cout << "YES\n"; return ; }

	int *mx , *mn ; 
	if(max(max(a,b),c)==a ) 
		mx = &a ;
	else if(max(max(a,b),c)==b)
		mx = &b ;
	else
		mx = &c;

	if(min(min(a,b),c)==a ) 
		mn = &a ;
	else if(min(min(a,b),c)==b)
		mn = &b ;
	else
		mn = &c;

	int *mid  ; 
	for(int i=0; i<3; ++i)
	{
		*mx -= *mn ; 
		if(*mx==*mn)
		{
			if((a^b^c)==a) mid = &a;
			else if((a^b^c)==b) mid = &b;
			else mid = &c ;
			if(*mid==a && *mid==b && *mid==c)
			{
				cout << "YES\n" ;
				return; 
			}
			if(i==2 && mid == mn)
			{
				cout << "YES\n";
				return ;
			}
			else mx = mid ; 
		}
	} 
	cout << "NO\n";
}
int main()
{
	int t ; cin >> t ; while(t--){solve();}
}
/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Sort a, b, c
        int arr[] = {a, b, c};
        sort(arr, arr + 3);

        a = arr[0];
        b = arr[1];
        c = arr[2];

        if (a == b && b == c) {
            cout << "YES" << endl;
        } else if (b % a == 0 && c % a == 0 && (b / a - 1) + (c / a - 1) <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/