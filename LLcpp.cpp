#include<iostream>
using namespace std;
class book{
    public:
        int data;
        class book*next;
        void cc(){
            cout<<data;
        }
};
book *ptr=NULL;
int main(){
    book b1;
    b1.data=11;
    //b1.next=NULL;
   // ptr=b1;


}