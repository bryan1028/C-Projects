#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age\n
	
	"<<endl;
	cin>>age;

	if(age<20){
	cout<<"teenager\n";
	
    }
	else if(age<13){
	cout<<"Preteen\n";
	}
	else{
	cout<<"adult\n";
    }
	
	return 0;
	
}

