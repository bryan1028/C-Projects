#include <iostream>
using namespace std;
int add(int x,int y){
	int sum;
	sum = x + y;
	return(sum);
}


int main()
{
	int a,b;
	int sum;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	
	sum=a + b;
	cout<<"The sum of the two numbers is" <<sum<<endl;
	
	return 0;
	
	
}
