#include<iostream>
using namespace std;
int main(){
	//constant pointer
	int m=10;
	int * const ptr1 =&m;
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	m=20;
	//ptr1="Best";
	//We cannot change the value whom ptr1 is pointing  
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	
return 0;
	
	
	
}
