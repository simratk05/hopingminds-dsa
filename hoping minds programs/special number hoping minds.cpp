#include<iostream>
using namespace std;
int main(){
	int n;
	int temp;
	 int sum=0;
	 int product=1;
	 int total;

	cout<<"enter a number";
	cin>>n;
	int originalN=n;
	while(n>0){
		temp=n%10;
		sum=sum+temp;
		product= product*temp;
		n=n/10;
	}
	total=sum+product;
	if(total==originalN){
		cout<<"its a special number";
	}
	else{
		cout<<" not a special number";
	}
	return 0;
}
