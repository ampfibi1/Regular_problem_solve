#include<bits/stdc++.h>
using namespace std; 

void solve(){
	string s ; cin >> s ; 
	vector<char> vUp,vLow ;
	vector<int> itUp,itLow ;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='B' || s[i]=='b'){
			if(s[i]=='b'&&vLow.size()!=0&&
			vLow[vLow.size()-1]>='a'&&vLow[vLow.size()-1]<='z'){
				s[i]=' ' ;
				vLow.pop_back();itLow.pop_back();
			}
			if(s[i]=='B'&&vUp.size()!=0 &&
				vUp[vUp.size()-1]>='A'&&vUp[vUp.size()-1]<='Z'){
				s[i]=' ' ; 
				vUp.pop_back();itUp.pop_back();
			}
			s[i] = ' ' ;
			continue ;
		}
		if(s[i]>='a'&&s[i]<='z') {
			vLow.push_back(s[i]);
			itLow.push_back(i);
		}
		else {
			vUp.push_back(s[i]);
			itUp.push_back(i);
		}
	}
	vector<int> itFinal;
	for(int i=0; i<vUp.size(); ++i)
		itFinal.push_back(itUp[i]); 
	for(int i=0; i<vLow.size(); ++i)
		itFinal.push_back(itLow[i]); 

	sort(itFinal.begin(),itFinal.end());
	for(int x:itFinal) cout << s[x] ;
	cout << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}