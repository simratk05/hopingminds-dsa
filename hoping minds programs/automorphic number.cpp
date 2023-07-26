#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number-";
	cin>>n;
	int square=n*n;
	int temp=n;
	 int count=0;
	while(temp!=0){
		temp=temp/10;
		count++;
	}
	int divisor=1;
	for(int i=0;i<count;i++){
		divisor=divisor*10;
	}
	if(square%divisor==n){
		cout<<"it is an automorphic number";
	}
	else{
		cout<<"it is not an automorphic number";
	}
	return 0;
}
