/*Q1. Mr. Kapil singh is a software eng. And he pays annual income tax as per the conditions.
Income                             	tax
4lc-7lc                               	no tax
7lc – 10 lc                             5% on first exceeding 7 lcs
10lc-14lc                           	10% on exceeding 10 lcs
14lc – 18lc                         	15% on exceeding 14 lcs
>18lcs                               	25% on exceeding 18 lcs
*/
# include<iostream>
using namespace std;
int main(){
	int n;
	int tax=0;
	int totalsalary;
	cout<<"enter mr kapil singh income-"<<endl;
	cin>>n;
	if(n>=400000 && n<700000){
		cout<<"no tax"<<endl;
		cout<<"total salary is"<<n;
	}
	else if(n>=700000 &&n<1000000){
		tax= (5*n)/100;
		cout<<" applicable tax is"<<tax;
		totalsalary= n-tax;
		cout<<"total salary is"<<totalsalary;
			}
			else if(n>=1000000 &&n<1400000){
		tax= (10*n)/100;
		cout<<" applicable tax is"<<tax;
		totalsalary= n-tax;
		cout<<"total salary is"<<totalsalary;
			}
			else if(n>=1400000 &&n<1800000){
		tax= (15*n)/100;
		cout<<" applicable tax is"<<tax;
		totalsalary= n-tax;
		cout<<"total salary is"<<totalsalary;
			}
			else if(n>=1800000){
		tax= (25*n)/100;
		cout<<" applicable tax is"<<tax;
		totalsalary= n-tax;
		cout<<"total salary is"<<totalsalary;
			}
			return 0;
			
}

