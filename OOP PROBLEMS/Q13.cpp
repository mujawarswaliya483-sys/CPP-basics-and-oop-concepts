#include<iostream>
#include<string>
using namespace std;

class Person{
public:
	string name;
	int age;

	Person(string name,int age){
		this->name=name;
		this->age=age;
	}

	~Person(){
		cout<<"destructor called"<<endl;
	}
};

class Student:public Person{
private:
	int rollNo;
	int id;
public:
	Student(string name,int age,int rollNo,int id):Person(name,age){
		this->rollNo=rollNo;
		this->id=id;
	}
	void display(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<rollNo<<endl;
		cout<<id<<endl;
	}
};

int main(){
	Student s1("swaliya",18,101,123);
	s1.display();
}