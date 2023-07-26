#include<iostream>
using namespace std;
bool ducknumber(int n){ int temp;
		while(n>0){
	temp=n%10;
	if(temp==0){
		return true;
	}
	n=n/10;	
		}
		return false;
}
int main(){
	int n;
	cout<<" enter a number";
	cin>>n;
	int number=n;
	if(ducknumber(n)){
		cout<<"it is a duck number";
	}
	else{
		cout<<"it is not a duck number";
	}

	return 0;
}
