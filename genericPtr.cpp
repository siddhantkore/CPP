#include<iostream>
using namespace std;
int main(){
	void *gp;//this is also called as Generic pointer
	int *ip,a=5;
	ip=&a;
	gp=ip;
	ip=(int *)gp;//<--Valid//ip=gp;<--Invalid
	//*ip=*gp;
	//these are illegal statement because a void pointer can point to any data type
	//pointer but no datatype can point to the void pointer.
	cout<<a<<endl;//5
	cout<<&a<<endl;//0x6ffe0c
	cout<<*ip<<endl;//5
	cout<<ip<<endl;//0x6ffe0c
	cout<<gp<<endl;//0x6ffe0c
	return 0;
}
