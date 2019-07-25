#include <iostream>
using namespace std;
int getarea(int r){
	
	int area;
	area = 3.142 *r*r*r;
	return(area);
}
	int getcircumference(int r){
		int circumference;
		circumference = 2 * 3.142 * r;
		return(circumference);
	}
		
	int main(){
		int r, area,circumference;
		cout<<"Radius";
		cin>>r;
		if(r>0){
			area = getarea(r);
			circumference = getcircumference(r);
			cout<<"Area"<<area<<endl;
			cout<<"Circum."<<circumference<<endl;
		}
		else{
			cout<<"Enter value greater than zero";
		}
	return 0;
	}

