#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter length of array-";
	cin>>n;
	int arr[n];
	cout<<"enter array elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
			
			int swap=arr[j];
			arr[j]=arr[i];
			arr[i]=swap;}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
