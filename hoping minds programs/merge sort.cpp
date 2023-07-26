#include<iostream>
using namespace std;
void conquer(int arr[],int si,int mid,int ei){
		int *merge=new int [ei-si+1];
		int index1=si;
		int index2=mid+1;
		int a=0;
		while(index1<=mid && index2<=ei){
			if(arr[index1]<=arr[index2]){
			merge[a++]=	arr[index1++];
			}
			else{
				merge[a++]=	arr[index2++];
			}
		}
		while(index1<=mid){
			merge[a++]=arr[index1++];
		}
	while(index2<=ei){
			merge[a++]=arr[index2++];
		}
		for(int i=0,j=si;i<(ei-si+1);i++,j++){
			arr[j]=merge[i];
		}
		delete[] merge;	
	}
void divide(int arr[],int si,int ei){
	if(si>=ei){
		return;
	}
	    int mid=si+(ei-si)/2;
		divide(arr,si,mid);
		divide(arr,mid+1,ei);
		conquer(arr,si,mid,ei);
	}
int main(){ int z;
cout<<"enter the number of elements-";
cin>>z;
int arr[z];
for(int y=0;y<z;y++){
	cin>>arr[y];
}
	//int arr[]={3,7,8,2,5,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	divide(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
