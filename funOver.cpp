#include<iostream>
using namespace std;
double power(double m,int n);
int power(int m, int n);
int main(){
	double m;
	int n;
	cout<<"\nEnter the number to power\n ";
	cin>>m;
	cout<<"\nEnter the power\n";
	cin>>n;
	cout<<power(m,n);
	//cout<<power(m,n);
}
double power(double m,int n){
	if(n>2){
		double p=1;//=m;
		while(n!=0){
			p=p*m;
			--n;
		}
		return (p);
	}
	else{
		return(m*m);
	}
	cout<<endl;
}
int power(int m,int n){
	cout<<"Integer function is called\n";
	if(n>2){
		int p=1;//=m;
		while(n!=0){
			p=p*m;
			--n;
		}
		return (p);
	}
	else{
		return(m*m);
	}
	cout<<endl;
}
