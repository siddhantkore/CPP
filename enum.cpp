#include<iostream>
using namespace std;
	enum shape{
		circle ,square,triangle
	};
int main(){
	cout<<"enter shape code\n";
	int code;
	cin>>code;
	while(code>=circle && code<=triangle){
		switch(code){
			case circle:
				cout<<"jjjjjj";
				break;
			case square:
				cout<<"tttt";
				break;
			case triangle:
				cout<<"jkjkjkj";
				break;
//			default:
//				cout<<"nnnnnn";
				
		}
		cout<<"Enter shape code\n";
		cin>>code;
	}
	cout<<"Bye\n";
	return 0;
}
