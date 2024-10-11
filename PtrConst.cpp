#include<iostream>

using namespace std;

int main()
{
	int x = 10;
	int *p = &x;
	x++;
	cout<<*p<<endl;	//Normal Pointer
	
	x = 20;
	int const *ptr = &x; //same as below
	//x++;
	//*ptr++;
	cout<<*ptr<<endl;
	
	x = 30;
	const int *prt = &x;  // pointer to a integer constant
	//x++;				it can modify x value
	//*prt++;				// but the pointer can not modify the data
	cout<<*prt<<endl;
	
	// Another Case
	
	int y = 80;
	prt = &y;
	cout<<*prt<<endl;
	
	
	int c = 90;
	int *const point = &c; // Constant pointer to an integer
	//*point++;				//here the data is not constant pointer is constant
	//						it cannot point any other variable
	c++;
	cout<<*point<<endl;
	
	
	int z = 40;
	const int *const pointer = &z; // Pointer Constant to integer Constant
	// 								data as well as pointer is constant
	cout<<++z<<endl<<*pointer;
	
	return 0;
}
