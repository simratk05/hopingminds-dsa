# include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int k){
for(int i=0;i<n;i++){
		if(arr[i]==k){
			cout<<" the number is found and the index is-  ";
		return i;
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
	cout<<linearsearch(arr,n,k);
	return 0;
}
