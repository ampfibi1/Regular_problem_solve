#include <iostream>
using namespace std;

int main() {
    int n = 0 ;
    for(int i=0; i<26; ++i){
        cout << char((n++)+97) << endl ; 
    }
}
