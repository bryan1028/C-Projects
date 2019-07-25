/* #include <iostream>
using namespace std;
int main() {
	int a, b;
	a = 88;
	b = 100;
	
	cout<<"The address of a is: " << &a <<endl;
	cout<<"The address of b is: " << &b <<endl;
	
	return 0;
}
*/
 
 #include <iostream>
 using namespace std;
 int main(){
 	int a = 100;
 	int *p = &a;
 	cout << a << "  " << &a <<endl;
	cout << p << "  " << &p <<endl;
	
	return 0;  
 }

