#include<iostream>
using namespace std;
int main(){int n,m;
int cube=0;
int flag=0;
cout<<"enter the lower limit-";
cin>>n;
cout<<"enter the upper limit-";
cin>>m;
for(int i=n;i<=m;i++){
	int y=i;
	int z=i;
	cube=0;
	while(y>0){
		int temp= y%10;
		cube=cube+temp*temp*temp;
		y=y/10;
	}
	if(z==cube){
		cout<<z<<endl;
		flag++;
	}
}
cout<<"the number of amstrong numbers is-"<<flag<<endl;
	return 0;
}
