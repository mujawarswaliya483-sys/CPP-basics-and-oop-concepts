#include<iostream>
#include<string>
using namespace std;
class Book{
string title;
string author;
int price;

public:
	Book(string t,string a,int p){
		this->title=t;
		this->author=a;
		this->price=p;
	}

	void display(){
		cout<<title<<endl;
		cout<<author<<endl;
		cout<<price<<endl;
	}
};

int main(){
	Book b1("peer-e-kamil","sadiya shaikh",300);
	b1.display();
}