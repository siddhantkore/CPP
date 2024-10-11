#include <iostream>

using namespace std;

int &fun ( int &a ) // &a is reference to x (fun(x)) Means x and &a are not Different
{   //&fun It Returns Reference of a which is x only
	cout<<a<<endl;
	return a;
}

int main ()
{
	int x = 10;
	fun(x) = 25; // Here fun(x) acting as x only
	
	cout<<x;
	
	return 0;	
}
