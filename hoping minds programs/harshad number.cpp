#include<iostream>
using namespace std;
int main(){
	int n;
	int temp;
	 int sum=0;
	 int division;
	 int total;

	cout<<"enter a number";
	cin>>n;
	int originalN=n;
	while(n>0){
		temp=n%10;
		sum=sum+temp;
		n=n/10;
	}
division=n%sum;
	if(division==0){
		cout<<"its a harshad number";
	}
	else{
		cout<<" not a harshad number";
	}
	return 0;
}
