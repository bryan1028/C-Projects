#include <iostream>

using namespace std;
int main()
{
	int choice,num;
	menu://goto
	cout<<"\t\t ***MENU***\n";
	cout<<"1.soda-----------------10\n";
	cout<<"2. Tea----------------- 20\n";
	cout<<"3. Chips-----------------30\n";
	cout<<"enter your choice>>";
	cin>>choice;
	switch(choice)
	{
	case 1:
		cout<<"\nhow many bottles of soda?";
		cin>>num;
		cout<<"\n the total is :"<<num*10;
		break;
		case 2:
		cout<<"\nhow many cups of tea?";
		cin>>num;
		cout<<"\n the total is :"<<num*20;
		break;
		case 3:
		cout<<"\nhow many plates of chips?";
		cin>>num;
		cout<<"\n the total is :"<<num*30;
		break;	
		default:
		cout<<"\ not a valid choice";
		goto menu;
		break;	
		
	}
		goto menu;
	return 0;
}
