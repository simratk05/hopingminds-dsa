#include<iostream>
using namespace std;
int main(){
	int n,temp;
	int num=0;
	cout<<"enter a number-";
	cin>>n;
	int square;
	square=n*n;
	while(square>0){
		temp=square%10;
		num=num+temp;
		square=square/10;
	}
	if(n==num){
		cout<<" the number is a neon number";
	}
	else{
		cout<<"it is not a neon number";
	}
	return 0;
}
