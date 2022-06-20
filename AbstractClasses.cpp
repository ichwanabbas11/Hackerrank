#include <iostream>
#include <vector>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook : public Book
{	int MyBookprice;
public:
	MyBook(string tMybook,string aMybook,int price)
	:Book(tMybook,aMybook),MyBookprice(price){};
	
	void display(){
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Price: " << MyBookprice << endl;
	}
	
};
int main() {
  	string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();	
	return 0;
}