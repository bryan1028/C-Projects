#include<iostream>
using namespace std;
int main(){
	//local variable declaration
	char grade;
	cout <<"enter grade\n";
	cin>>grade;
	switch(grade) {
		case 'A':
			cout <<"Excellent!"<<endl;
			break;
		case 'B':
			cout <<"VeRy GoOd"<<endl;
			break;
		case 'C':
			cout <<"Well done"<<endl;
			break;
		case 'D':	
			cout <<"You passed"<<endl;
			break;
		case 'F':
			cout <<"Better try again"<<endl;
			break;
		default:
			cout<<"Invalid grade"<<endl;
	}
	
	cout<<"Your grade is "<<grade<<endl;
	return 0;
}
