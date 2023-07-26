#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter length of array-";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int counter=1;
	while(counter<(n-1)){
		for(int i=0;i<n-counter;i++){
			if(arr[i+1]>arr[i]){
				int swap= arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=swap;
			}
		}
		counter++;
	}
	cout<<"sorted array is-"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<endl;
	}
}
