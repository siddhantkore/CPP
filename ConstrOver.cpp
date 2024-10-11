#include<iostream>
using namespace std;
class Book{
	private:
		string title;
		string author;
		string publisher;
		double price;
		int isbn;
	public:
		Book(){
			
			title = "Unknown";
			author = "Unknown";
			publisher = "Unknown";
			price = 0.0;
			isbn = 0.0;
		}
		Book(string title, string author, int isbn){
		
			this->title = tile;
			this->author = author;
			this->isbn = isbn; 
		}
		Book(string title,string author,string publisher,double price,int isbn){
			
			this->title = title;
			this->author = author;
			this->publisher = publisher;
			this->price = price;
			this->isbn = isbn;
		}
};
