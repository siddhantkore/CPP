#include <iostream>
using namespace std;

void swap ( int *a, int *b )
{
	cout<<"In Fun"<<a<<endl;
	
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main ()
{
	int a = 10;
	int b = 20;
	cout<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	
	return 0;
}
