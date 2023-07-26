/* sample input-- 8     3    5    2   4   7    9   1
sample output---- 198  75   112  20   16  9    0   0*/
#include<iostream>
using namespace std;
int main(){
/*	int n;
	cout<<"enter the number of elements in an array-";
	cin>>n;*/

	int a[]={8,3,5,2,4,7,9,1};
	int b[8];
	for(int i=0;i<8;i++){
		int l=0,s=0;
		for(int j=i+1;j<8;j++){
			if(a[i]<a[j])
			{
			l+=a[j];}
			else{
				s+=a[j];
			}
			}
					b[i]=l*s;
	cout<<b[i]<<endl;	
	}
	//cout<<"output is-"<<endl;
	return 0;
}
