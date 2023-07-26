#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of elements in array-";
	cin>>n;
	int a[n];
	cout<<"enter array-"<<endl;
	int maxnum=INT_MIN;
	int minnum=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(maxnum<a[i]){
			maxnum=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(minnum>a[i]){
			minnum=a[i];
		}
	}
	cout<<"the maximum element in the array is-"<<maxnum<<endl;
	cout<<"the minimum element in the array is-"<<minnum<<endl;
	
	return 0;
	
}
