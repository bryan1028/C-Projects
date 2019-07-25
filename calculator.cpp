#include<iostream>
using namespace std;
int main(){
	char choice;
	float num1,num2;
	
	cout << "Enter operator either + or - or * or /:";
	cin>>choice;
	
	cout<<"Enter two operands:";
	cin >> num1 >> num2;
	
	switch(choice){
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;
            
        default:
			cout:"select the appropriate operator";
			break;
	}
	return 0;
}
