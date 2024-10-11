#include<iostream>
using namespace std;
int area(int );
int area(int ,int );
double area(double);
int main(){
	cout<<"calling square\n"<<area(5)<<endl;
	cout<<"calling rectangle \n"<<area(5,10)<<endl;
	cout<<"Calling circle\n"<<area(5.5)<<endl;
	cout<<"Hello";
	return 0;
}
int area(int side){
	return (side*side);
}
int area (int length, int width){
	return(length*width);
}
double area(double radius){
	return(3.14*radius*radius);
}
