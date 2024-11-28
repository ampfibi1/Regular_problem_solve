#include<bits/stdc++.h>
using namespace std; 

int main(){
	string s ;
	getline(cin,s); 
	// cin>> s ; 
	
	//print word using istringstream
	//s = "Hello World" => Hello , World
	istringstream iss(s) ; 
	string word ; 
	while(iss>>word) cout << word << endl ; 
	//for(auto w:iss) cout << iss << endl ; 

	//erase character
	s.erase(s.begin()+3); //3char erase 
	reverse(s.begin(),s.end());

	string sub ; 
	sub = s.substr(0,3);

	cout << char(toupper(s[3]))<<endl;
	cout << char(tolower(s[3])) << endl ; 
	cout << s << endl << sub; 
}
