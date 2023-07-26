/*A school library charges a fine for books returned after the due date acc. To the following condition : -
Days                        	Fine
1-5 days                     .40 p
6-10 days                   .65p exceeding 6 days
10-15 days                  .80p exceeding 10 days
15-25 days                   1.20p exceeding 15 days
# if the book gets misplaced fine of Rs. 500 on each book, with the due date fine on the day of reporting
# If the book has been hampered Rs.200 on each book, with the due date fine on the day of reporting
# Calculate total fine acc. To the books lend to the student
#Due date to return the book is 25 days after the issue date*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float totalfine;
	string s;
	string g;
	cout<<"is the book misplaced?"<<endl;
	cin>>s;
	if(s=="yes"){
		cout<<"fine of rs.500"<<endl;
		totalfine=totalfine+500;
	}
	else{
		cout<<"no fine for book misplace"<<endl;
	cout<<" is the book hampered?"<<endl;
	cin>>g;
	if(g=="yes"){
		cout<<" fine of rs.200"<<endl;
		totalfine=totalfine+200;
	}
	else{
		cout<<"no fine for book hampering "<<endl;
	}
	cout<<"enter the number of days the book is returned after issue date"<<endl;
	cin>>n;
	if(n<=25){
		cout<<"book returned on time. no fine issued"<<endl;
	}
	else if(n>25 && n<=30){
		cout<<" fine of 40 p applicable"<<endl;
		totalfine=totalfine+ 0.4;
	}
	else if(n>30 && n<=35){
		cout<<" fine of 65 p applicable"<<endl;
		totalfine=totalfine+ 0.65;
	}
	else if(n>35 && n<=40){
		cout<<" fine of 80 p applicable"<<endl;
		totalfine=totalfine+ 0.8;
	}
	else if(n>40){
		cout<<" fine of 120p applicable"<<endl;
		totalfine=totalfine+ 1.20;
	}
	cout<<" total fine is-"<<totalfine;
}
	return 0;
}
