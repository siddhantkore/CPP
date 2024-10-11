#include<iostream>

using namespace std;

int sum (int a, int b=0, int c=0 ) // (int a, int b=0,int c) <- Invalid (int a, int b=0, int c=0) valid
{
	return a+b+c;
}
int max (int a, int b=0, int c=0 )
{
	if( a>b && a>c )
		return a;
	else if ( b>c )
		return b;
	else
		return c;
}
int main ()
{
	cout<<sum(20)<<endl;
	cout<<sum(10,20,30)<<endl;
	
	cout<<max(10,20,30)<<endl;
	cout<<max(30,10)<<endl;
	cout<<max(20);
	
	return  0;
}
