#include<iostream>
#include<string>
using namespace std;
string decimaltohexadecimal(int n){
	string ans="";
	int x=1;
	while(x<=n){
		x=x*16;
	}
	x=x/16;
	while(x>0){
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=16;
		if(lastdigit<=9){
			ans=ans+ to_string(lastdigit);
		}
		else{
			char c='A'+lastdigit-10;
			ans.push_back(c);
		}
	}
	
	return ans;
}
int main(){
	int n;
	cout<<"enter a decimal number";
	cin>>n;
	cout<<decimaltohexadecimal(n)<<endl;
	return 0;
}
