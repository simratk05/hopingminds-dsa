#include<iostream>
#include<math.h>
using namespace std;
bool evennum(int a){
if(a%2==0){
	return true;
}	
else{
return false;
}	
}
bool primenum(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
		else{return true;
		}
	}
}
bool armstrongnum(int a){
	int y=a;
	int temp=0;
	while(a>0){
		int c=a%10;
		
		temp=temp+c*c*c;
		a=a/10;
	}
	if(y==temp){
	return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cout<<"enter the numbers in a array-";
	cin>>n;
	cout<<"enter array elements-"<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(evennum(a[i])==true){
			cout<<a[i]<<"- "<<"its a even num"<<endl;
		}
		else{
			cout<<a[i]<<"- "<<"odd num"<<endl;
		}
	}
		for(int i=0;i<n;i++){
		if(primenum(a[i])==true){
			cout<<a[i]<<"- "<<"its a prime num"<<endl;
		}
		else{
			cout<<a[i]<<"- "<<"composite num"<<endl;
		}
	}
	for(int i=0;i<n;i++){
		if(armstrongnum(a[i])==true){
			cout<<a[i]<<"- "<<"its a armstrong num"<<endl;
		}
		else{
			cout<<a[i]<<"- "<<"not a armstrong num"<<endl;
		}
	}
	return 0;
}
