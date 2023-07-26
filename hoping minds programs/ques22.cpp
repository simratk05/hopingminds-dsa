#include<iostream>
using namespace std;
bool countsort(int a[],int n,int k){
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
return true;	
}
int main(){
	int a[]={1,2,4,3};
	int n=sizeof(a)/sizeof(a[0]);
	int k=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>k){
			k=a[i];
		}
	}
	cout<<"length of array is-"<<n<<endl;
	cout<<"largest element in the array is-"<<k<<endl;
    if(countsort(a,n,k)==true){
    	cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
