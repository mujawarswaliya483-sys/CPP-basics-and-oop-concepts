#include<iostream>
#include<string>
using namespace std;

class Shape{ //abstract class
	virtual void draw() = 0; // pure virtual function.
	// this means that shape classes ke ander 
	// jitni bhi child classes hongi unke ander draw function implement hona chahiye
};

class Circle : public Shape{
public:
	void draw(){
		cout<<"drawing a circle\n";
	}
};
int main(){
	Circle c1;
	c1.draw();

	return 0;
}