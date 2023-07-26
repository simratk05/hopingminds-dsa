#include<iostream>
using namespace std;
int octaltodecimal(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y= n%10;
		ans=ans+x*y;
		x=x*8;
		n/=10;
	}
	return ans;
}
int main(){
	int n;
	cout<<"enter the octal number";
	cin>>n;
	cout<<octaltodecimal(n);
	return 0;
}
