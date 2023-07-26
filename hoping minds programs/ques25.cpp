// to find perfect square in an array
#include<iostream>
#include<math.h>
using namespace std;
bool perfectsquare(int a){
	float b;
    b=sqrt(a);
	if(int(b)==b){
		return true;
	}
	else{return false;
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
		if(perfectsquare(a[i])==true){
			cout<<a[i]<<"- "<<"its a perfect square"<<endl;
		}
		else{
			cout<<a[i]<<"- "<<"not a perfect square"<<endl;
		}
	}
	return 0;
}
