#include <iostream>
using namespace std;

int s = 77;

void fun1 ()
{
	int s = 10;
	
	{
		int s = 3;
		cout<<++s<<" Inside Block"<<endl; // Print nearest value of x
	}
	cout<<s<<" Inside fun1"<<endl;
	
}

int main ()
{
	cout<<s<<" Inside main"<<endl;
	fun1 ();
	int s = 2;
	cout<<s<<" Inside main"<<endl;
}
