#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter num1";
	cin>>num1;
	cout<<"Enter num2";
	cin>>num2;
	if(num1>num2){
		cout<<"number 1 is greater than number 2";
	}
	elseif(num1<num2){
		cout<<"number 1 is less than number 2";
	}
	else{
		cout<<"number 1 is equal to number 2";
	}
	
	return 0;
}
