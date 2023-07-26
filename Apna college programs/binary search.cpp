#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int k){
int s=0;
int e=n;
while(s<=n){
	int mid=(s+e)/2;
	if(arr[mid]==k){
		return mid;
	}
	else if(arr[mid]>k){
		e=mid+1;
	}
	else{
		s=mid+1;
	}
}
	return -1;
}
int main(){
	int n,k,i=0;
	int arr[n];
	cout<<"enter length of array-";
	cin>>n;
	cout<<"enter array elements-";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"enter key you want to search in array";
	cin>>k;
	cout<<binarysearch(arr,n,k);
	return 0;
}
