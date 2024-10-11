#include<iostream>

using namespace std;

template<class T>
T myMax ( T x, T y )
{
	if ( x > y )
		return x;
	else
		return y;
}

int main ()
{
	int a = myMax(10, 20);
	
	double b = myMax(20.10,30.20);
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<max(10,20) <<endl;
	cout<<max(20.5,19.5) <<endl;
	
	return 0;
}

