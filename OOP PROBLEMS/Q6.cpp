#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	string name;
	int id;
	float basicSalary;
public:
	void input(){
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter id:"<<endl;
		cin>>id;
		cout<<"enter basic basicSalary:"<<endl;
		cin>>basicSalary;		
	}

	 float calculateHRA()
	{
		return basicSalary*20/100;
	}

	float calculateDA()
	{
		return basicSalary*10/100;
	}

	float calculateGrossSalary()
	{
		return basicSalary + calculateHRA() + calculateDA();
	}

	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"ID:"<<id<<endl;
		cout<<"Basic Salary:"<<basicSalary<<endl;
		cout<<"HRA:"<<calculateHRA()<<endl;
		cout<<"DA:"<<calculateDA()<<endl;
		cout<<"Gross Salary:"<<calculateGrossSalary()<<endl;
	}
};

int main(){
	Employee e;
	e.input();
	e.display();
}