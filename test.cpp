#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str); 

    if (!str.empty()) {
        str[0] = toupper(str[0]);  
      }
    for(int i=1;i<str.length();i++)
    {
        str[i] = tolower(str[i]);
    }
    cout << str << endl; 
    return 0 ;
}