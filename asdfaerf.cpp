#include<iostream>
using namespace std; 

void merge(int a[],int low,int mid,int high){
	int l_sz = mid-low+1 , r_sz = high - mid ; 

	int L[l_sz+1] , R[r_sz+1] ;

	for(int i=0; i<l_sz; ++i) L[i]=a[i+low] ;
	for(int i=0; i<r_sz; ++i) R[i]=a[i+mid+1] ;

	L[l_sz] = R[r_sz] = INT_MAX ; 

	int l_i = 0 , r_i = 0 ; 

	for(int i=low; i<=high; ++i){
		if(L[l_i]<R[r_i])
			a[i] = L[l_i++];
		else
			a[i] = R[r_i++];
	}
}
void mergeSort(int a[],int low , int high){
	if(low==high) return ;

	int mid = (low+high)/2 ;
	mergeSort(a,low,mid) ;//n/2
	mergeSort(a,mid+1,high) ;//n/2

	merge(a,low,mid,high) ; //n
}
int main(){
	int n ; cin >> n ; 
	int a[n] ;
	for(int &x:a) cin >> x ; 

	mergeSort(a,0,n-1) ;

	for(int x:a) cout << x << " " ;
}