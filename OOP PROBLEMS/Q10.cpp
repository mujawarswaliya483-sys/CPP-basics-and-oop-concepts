#include<iostream>
#include<string>
using namespace std;

class Time{
private:
	int hour;
	int minutes;
	int seconds;
public:
	void input(){
		hour = 4;
		minutes = 15;
		seconds = 45;
	}

	void display(){
		cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
	}
};

int main(){
	Time t;
	t.input();
	t.display();
	return 0;
}