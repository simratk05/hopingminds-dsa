#include<iostream>
using namespace std;
void countsort(int a[],int n,int k){
	int count[k+1]={0};
	int b[n];
	for(int i=0;i<n;i++){
		count[a[i]]++;
	}
	for(int i=1;i<=k;i++){
		count[i]=count[i]+count[i-1];
	}
	for( int i=n-1;i>=0;i--){
		b[--count[a[i]]]=a[i];
	}
	for(int i=0;i<n;i++){
		a[i]=b[i];
	cout<<a[i]<<endl;
	}
	
}
int main(){
	int a[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
	int n=sizeof(a)/sizeof(a[0]);
	int k=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>k){
			k=a[i];
		}
	}
	cout<<"length of array is-"<<n<<endl;
	cout<<"largest element in the array is-"<<k<<endl;
    countsort(a,n,k);
	return 0;
}
