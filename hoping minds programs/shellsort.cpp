#include<iostream>
using namespace std;
void shellsort(int a[],int n){
	for(int gap=n/2;gap>=1;gap/=2){
		for(int j=gap;j<n;j++){
		for(int i=j-gap;i>=0;i-=gap){
			if(a[i+gap]>=a[i]){
				break;
			}
			else{
				int temp=a[i];
				a[i]=a[i+gap];
				a[i+gap]=temp;
			}
		}	
		}
	}
}
int main(){
	int a[]={23,29,15,19,31,7,9,5,2};
	int n=sizeof(a)/sizeof(a[0]);
	shellsort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
