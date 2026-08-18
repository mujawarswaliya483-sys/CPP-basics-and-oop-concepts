#include<iostream>
#include<string>
using namespace std;

class Employee{
protected:
string name;
int salary;

};

class Manager:public Employee{
protected:
	string department;
	float bonus;
public:

	void input(){
	cout<<"enter your name:"<<endl;
	cin>>name;
	cout<<"enter your salary:"<<endl;
	cin>>salary;
	cout<<"enter your  department:"<<endl;
	cin>>department;
	cout<<"enter your bonus:"<<endl;
	cin>>bonus;

}
};

int main(){
	Manager m;
	m.totalSalary();
	m.input();

}