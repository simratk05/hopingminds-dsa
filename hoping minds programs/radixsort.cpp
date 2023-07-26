#include<iostream>
using namespace std;
void countsort(int a[],int n,int pos){
	int count[10]={0};
	int b[n];
	for(int i=0;i<n;i++){
		count[(a[i]/pos)%10]++;
	}
	for(int i=1;i<=10;i++){
		count[i]=count[i]+count[i-1];
	}
	for( int i=n-1;i>=0;i--){
		b[--count[(a[i]/pos)%10]]=a[i];
	}
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}	
}
void radixsort(int a[],int n){
	int max=a[0];
    for (int i=1;i<n;i++) {
        if (a[i] > max) {
            max=a[i];
        }
    }
	for(int pos=1;max/pos>0;pos*=10){
		countsort(a,n,pos);
	}
}
int main(){
	int a[]={904,46,5,74,62,1};
	int n=sizeof(a)/sizeof(a[0]);
    radixsort(a,n);
    for(int i=0;i<n;i++){
    	cout<<a[i]<<endl;
	}
	return 0;
}
