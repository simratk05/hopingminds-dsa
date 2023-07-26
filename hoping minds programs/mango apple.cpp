#include<iostream>
using namespace std;
int balancefruits(int a,int m,int rs){
	//a>=0;m>=0;rs>=0;rs>=(a-m);
	if(a>m){
		cout<<"number of mangoes brought are-"<<(a-m)<<endl;
		cout<<"cost of mangoes-"<<(a-m)<<endl;
		cout<<"rs left-"<<rs-(a-m)<<endl;
	}
	else if(a<m){
		cout<<"number of mangoes sold are-"<<(a-m)<<endl;
		cout<<"cost of mangoes-"<<(a-m)<<endl;
		cout<<"rs left-"<<rs+(a-m)<<endl;
	}
	else{
		cout<<"no mangoes brought or sold"<<endl;
		cout<<"rs left-"<<rs<<endl;
	}
}
int main(){
	int a,m,rs;
	cout<<"enter the number of apple-";
	cin>>a;
	cout<<"enter the number of mangoes-";
	cin>>m;
	cout<<"enter amount you have-";
	cin>>rs;
	cout<<balancefruits(a,m,rs);
return 0;	
}
