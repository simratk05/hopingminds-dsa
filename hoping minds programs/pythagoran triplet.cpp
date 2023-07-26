# include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"enter the value of base";
	cin>>x;
	cout<<"enter the value of height";
	cin>>y;
	cout<<"enter the value of hypotenuse";
	cin>>z;
	if(x+y>z){
	
	if(y*y+x*x==z*z){
		cout<<"it is a pythagoran triplet";
	}
	else{
		cout<<"it is not a pythagoran triplet";
	}
}
else{
	cout<<"it is not a triangle";
}	
return 0;
}
