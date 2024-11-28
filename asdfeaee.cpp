#include <iostream>
using namespace std;
#define ll long long 

int main(){
	ll res = 0x962815211;
	for(int i=0; i<2; ++i)
		res ^= 0x962815211 ;  
    cout << res << endl; 
    return 0;
}
