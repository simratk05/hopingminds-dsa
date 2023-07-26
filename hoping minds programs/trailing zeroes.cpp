//find trailing zeroes in the factorial of a given number 
# include<iostream>
using namespace std;
int main(){
	int n,z=0;
	cout<<"enter the number="<<endl;
	cin>>n;
	while(n>=5){
		n/=5;
		z=z+n;
	}
	cout<<"the number of trailing zeroes are-"<<z;
	return 0;
}
