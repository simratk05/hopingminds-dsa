#include<iostream>
using namespace std;
bool containdigit(int num){
	while (num>0) {
        int temp= num % 10;
        if (temp!=1 &&temp!= 4 &&temp!= 9)
           {
			return false;}
        num /= 10;
    }
    return true;
}

int countspecificnum(int m,int n){
int count=0;
for(int i=m;i<=n;i++){
	if(containdigit(i)){
	count++;
	}
	}
return count;
if(m>n){
	return -1;
	}	
}
int main(){
	int m,n;
	cout<<"enter 1st number-";
	cin>>m;
	cout<<"enter 2nd number-";
	cin>>n;
	int count=countspecificnum(m,n);
	cout<<count;
	return 0;
}
