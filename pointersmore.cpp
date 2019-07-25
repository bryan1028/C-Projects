 #include <iostream>
 using namespace std;
 int main(){
 	int a;
 	int *p;
 	int **q;
 	// Statements
 	a = 58;
 	p =&a;
 	q =&p;
 	cout<<  a<<" ";
	cout<< *p<<" ";
	cout<<**q<<" "; 
	return 0;  
 }

