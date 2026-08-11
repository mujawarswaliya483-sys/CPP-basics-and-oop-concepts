#include<iostream>
#include<string>
using namespace std;

class Product{
private:
	string product_name;
	int price;
	int quantity;

public:
	void input(){
		cout<<"product name:"<<endl;
		cin>>product_name;
		cout<<"price:"<<endl;
		cin>>price;
		cout<<"quantity:"<<endl;
		cin>>quantity;
	}

	int totalBill(){
		return price*quantity;
	}

	void display(){
		cout<<"product name is:\n"<<product_name<<endl;
		cout<<"product price is:\n"<<price<<endl;
		cout<<"product quantity is:\n"<<quantity<<endl;
		cout<<"Your Total Bill is:"<<totalBill()<<endl;
	}

};

int main(){
	Product p;
	p.input();
	p.display();
}