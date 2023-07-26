#include<iostream>
using namespace std;
int fact(int n){ int factorial=1;
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}
	return factorial;
}
int main(){
	int i,j,r,c,n;
	cout<<"enter the number of rows- ";
	cin>>n;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
