#include<iostream>
#include<string>
using namespace std;

class box{
private:
	int length;
	int breadth;
	int heigth;
public:
	Box(){
         length = 1;
         breadth = 1;
         heigth = 1;
	}

	Box(int side){
		 length = side;
         breadth = side;
         heigth = side;
	}

	Box(int l,int b,int h){
		 length = l;
         breadth = b;
         heigth = h;
	}

int volume(){
	return length *breadth *heigth;
}

void display(){
	cout<<"length:"<<length<<endl;
	cout<<"breadth:"<<breadth<<endl;
	cout<<"heigth:"<<heigth<<endl;
	cout<<"volume:"<<volume()<<endl;
}
};

int main(){
	Box box1;
	Box box2(5);
	Box box3(2,4,5);

	cout<<"Box1:"<<endl;
	box1.display();
	cout<<"Box2:"<<endl;
	box2.display();
	cout<<"Box3:"<<endl;
	box3.display();
}