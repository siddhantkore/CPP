#include<iostream>
using namespace std;
class Student{
	private:
		int x;
		int y;
	public:
		Student(int a=0,int b=0){
			x=a;
			y=b;
		}
		Student operator + (Student const &obj){
			Student temp;
			temp.x= x + obj.x;
			temp.y= y + obj.y;
			return temp;
		}
		display(){
			cout<<x<<" ";
			cout<<y<<endl;
		}
};
int main(){
	//Student s1,s2,s3;
	Student s1(10,20);
	s1.display();
	Student s2(5,10),s3;
	s2.display();
//	s1.Student(10,20);
//	s2.Student(5,10);
	s3= s1+s2;
	//obj.display();
	s3.display();
	return 0;
}
