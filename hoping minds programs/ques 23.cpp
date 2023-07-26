#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<pivot){
			i++;
			//swap smaller elements to new space
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	i++;
	int temp=arr[i];
	arr[i]=pivot;
	arr[high]=temp;
	return i;
}
void quicksort(int arr[],int low,int high){
if(low< high){
	int pivindex=partition(arr,low ,high);
	quicksort(arr,low,pivindex-1);
	quicksort(arr,pivindex+1,high);
		
}
}
int main(){
	int arr[]={6,3,9,5,2,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	for(int k=0;k<n;k++){
		cout<<arr[k]<<endl;
	}
	return 0;
}
