#include<iostream>

using namespace std;

void display()
{
	cout<<"Siddhant\n";
}

int main()
{
	void (*p) (); 	//Empty bracket contains Parameters
					//Asssigning a pointer to a Function Declaration
					
	p = display; 	//Initialisation 
	
	(*p)();			//Empty bracket contains Parameters
					//Call
	
	return 0;
}
