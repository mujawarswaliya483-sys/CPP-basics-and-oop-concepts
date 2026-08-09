#include<iostream>
#include<string>
using namespace std;

class Car{
private:
	string brand = "bmw";
	int model = 5;
	int price = 1000000;

public:
	void display(){
		cout<<"Car Brand is:"<<brand<<endl;
		cout<<"Car model is:"<<model<<endl;
		cout<<"Car price is:"<<price<<endl;
	}
};

int main(){
	Car c1;
	c1.display();
}