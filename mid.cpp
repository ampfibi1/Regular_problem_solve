#include<bits/stdc++.h>
using namespace std;
const int N = 5 ;
int a[N] = {3,5,1,2,4} ;

void merge(int f,int m , int l){
    int l_sz = m-f+1 , r_sz = l-m ; 
    int L[l_sz+1] , R[r_sz+1];
    for(int i=0; i<l_sz; ++i) L[i] = a[i+f];
    for(int i=0; i<r_sz; ++i) R[i] = a[i+m+1];  
    
    L[l_sz] = R[r_sz] = INT_MAX ; 

    int l_i = 0 , r_i = 0 ;
    for(int i=f; i<=l; ++i)
        a[i] = (L[l_i]<=R[r_i]?L[l_i++]:R[r_i++]) ;   
}
void mergeSort(int first,int last){
    if(first==last) return ; 
    int mid = (first+last)>>1 ; 

    mergeSort(first,mid);
    mergeSort(mid+1,last);

    merge(first,mid,last);
}

int partition(int l,int r){
    int piv = a[r];
    int i = l-1;

    for(int j=l; j<=r-1; j++)
        if(a[j]<=piv)
            swap(a[++i],a[j]);
    
    swap(a[++i],a[r]);
    return i ;
}
void quickSort(int l,int r){
    if(l==r) return ;
    
    int p = partition(l,r);
    quickSort(l,p-1) ; 
    quickSort(p+1,r) ; 
}

void binarySearch(int l,int r,int key){
    bool f = false;
    while(l<=r){
        int m = (l+r)>>1;
        if(a[m]==key){f=true;break;}
        if(a[m]<key)l=m+1;
        else r = m-1;
    }
    cout <<(f?"YES\n":"NO\n") ; 
}

int main(){
    //selection sort
  /*  for(int i=0; i<N; i++){
        int mn = i ;
        for(int j=i+1; j<N; j++){
            if(a[mn]>a[j])
                mn = j ;
        }
        swap(a[mn],a[i]);
    }*/
    //insertion sort
    /*for(int i=1; i<N; ++i)
        for(int j=i; j>=0; --j)
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
            else 
                break; */
    //bubble sort
    /*for(int i=0; i<N-1; ++i)
        for(int j=0; j<N-i-1; j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
*/
   
    //mergeSort(0,N-1);
    // quickSort(0,N-1);
    binarySearch(0,N-1,10);

    cout << "After Sort : " ;
    for(int x:a)
        cout << x << " " ;
    cout << endl ;
    return 0 ;
}
