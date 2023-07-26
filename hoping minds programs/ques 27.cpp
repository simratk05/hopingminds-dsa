#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int temp=0;
	cout<<"enter the numbers in a array-";
	cin>>n;
	cout<<"enter array elements-"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		temp=temp+a[i];
	}
	cout<<"sum of elements is-"<<temp<<endl;
	cout<<"mean of elements is-"<<temp/n<<endl;
	int maxnum=INT_MIN;
	int minnum=INT_MAX;
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
	cout<<"median is-"<<(maxnum+minnum)/2<<endl;
	int count[maxnum+1]={0};
	for(int i=0;i<n;i++){
		count[a[i]]++;
	}
	int countmax=INT_MIN;
	int mode=-1;
for(int i=0;i<n;i++){
		if(countmax<count[a[i]]){
			countmax=count[a[i]];
			mode=a[i];
		}
	}
	cout<<"mode is-"<<mode<<endl;

	
	return 0;
}
