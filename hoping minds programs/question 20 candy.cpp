#include<iostream>
using namespace std;
int main(){int n=10;
int m;
m<=n;
int num;
int k,c;
cout<<"enter the number of customers for the candy-";
cin>>m;
for(int i=0;i<m;i++){
	cout<<"enter the number of candies you want to take out-";
cin>>c;
k=n-c;
if(c<=n && k>=5){
	cout<<"the number of candies left is-"<<k<<endl;
}
else if(c<=n && k<5){
	k=10;
	cout<<"the number of candies left is-"<<(k-c)<<endl;
}
else if(c>n){
	cout<<"invalid input"<<endl;
}
else if(c==0){
	cout<<"the number of candies left is-"<<n<<endl;
}
}


	return 0;
}
