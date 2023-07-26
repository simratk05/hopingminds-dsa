#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the numbers in a array-";
	cin>>n;
	cout<<"enter array elements-"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		int maxnum=INT_MIN;
		for(int i=0;i<n;i++){
		if(maxnum<a[i]){
			maxnum=a[i];
		}
	}
	int count[maxnum+1]={0};
	for(int i=0;i<n;i++){
		count[a[i]]++;
	}
	int countmax=INT_MIN;
	int mode=-1;
	int temp=0;
for(int i=0;i<n;i++){
		if(countmax<count[a[i]]){
			countmax=count[a[i]];
			mode=a[i];
			temp=temp+mode;
		}
	}
	for(int i=1;i<=maxnum;i++){
		count[i]=count[i]+count[i-1];
	}
	cout<<"mode is-"<<mode<<endl;
	cout<<"number of times it comes is-"<<count[mode]<<endl;
	return 0;
}
