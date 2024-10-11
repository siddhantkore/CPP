#include<iostream>
using namespace std;
class B
{
public: 
 const B& operator=(B& other)
 {
  other.x =x ;
  x = other.x;
  return *this;
 }
 print(){
 	cout<<x<<endl;
 }

 int x;
};


int main()//int argc, char** argv[])
{
 B a;
 a.x = 33;
 cout<<"First a";
 a.print();
 B b;
 b.x = 44;
 cout<<endl<<"First b";
 b.print();
 //a = b;//both a and b will be changed
 b = a;
 //Swapped value
 cout<<endl<<"Afet a";
 a.print();
 cout<<endl<<"After b";
 b.print();
 return 0;
}
