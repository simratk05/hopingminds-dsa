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

	if(sum==product){
		cout<<"its a spy number";
	}
	else{
		cout<<" not a spy number";
	}
	return 0;
}
