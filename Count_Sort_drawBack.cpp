#include<iostream>
using namespace std ;

int main(){
	int a[] = {1,2,5,3} ; //1
	int n = 4 ; //1

	for(int i=1; i<=n-1; ++i){
		for(int j=i-1; j>=0; --j){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
			else
				break ; 
		}
	}

	for(int x:a) cout << x << " " ; //n

}