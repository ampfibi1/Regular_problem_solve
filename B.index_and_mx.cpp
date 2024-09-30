//https://codeforces.com/contest/2007/problem/B
#include<iostream>
using namespace std; 

void solve()
{
    int n , m ; cin >> n >> m ; 
    int a[n] , mx = 0 ; 
    for(auto &x:a) {cin >> x ; mx = max(mx,x); }
    
    while(m--)
    {
        char c ; int first,last; 
        cin >> c >> first >> last ; 
        if((mx>=first && mx<=last))
           (c=='+') ? mx++ : mx--;
        cout << mx << " " ; 
    }
    cout << endl ; 
}
int main()
{
    int t ; cin >> t ; 
    while(t--){solve();}
    return 0 ;
}