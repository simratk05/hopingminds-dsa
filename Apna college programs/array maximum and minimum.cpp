#include<iostream>
using namespace std;
int main(){
	int n;
	int maxnum= INT_MIN;
	int minnum=INT_MAX;
	cout<<"enter the length of array";
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
for(int i=0;i<n;i++){
		if(s[i]>maxnum){
			maxnum=s[i];
		}
		if(s[i]<minnum){
			minnum=s[i];
		}
		
	}	
	cout<<maxnum<<endl;
	cout<<minnum<<endl;
	
}
