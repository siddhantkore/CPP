#include<iostream>

using namespace std;

int max ( int x , int y )
{
	if ( x>y )
		return x;
	else
		return y;
}

int min( int x, int y )
{
	if ( x<y )
		return x;
	else
		return y;
}

int main ()
{
	int (*p)(int x,int y);
								
	p = min;
//	int a = (*p)(10,20);
	cout<<(*p)(10,20)<<endl;
	                	// Like a Polymorphism ,Overriding , runtime Polymorphism
	p = max;
//	int b = (*p)(10,20);
	cout<<(*p)(10,20)<<endl;
	
//	cout<<a<<endl<<b;
	
	return 0;
}
