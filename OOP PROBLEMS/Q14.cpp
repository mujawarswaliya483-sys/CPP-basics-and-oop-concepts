#include<iostream>
#include<string>
using namespace std;

class Person{
public:
	string name;
	int age;
};

class Student:public Person{
public:
int rollNo;
string course;

void input(){
    cout<<"rollNo:"<<endl;
    cin>>name;
	cout<<"course:"<<endl;
	cin>>course;
	cout<<"age:"<<endl;
	cin>>age;
	cout<<"name:"<<endl;
	cin>>name;
}
void display(){
	cout<<"rollNo is:"<<rollNo<<endl;
	cout<<"course is:"<<course<<endl;
	cout<<"age is:"<<age<<endl;
	cout<<"name is:"<<name<<endl;
}
};

int main(){
	Student s1;
	s1.input();
	s1.display();
}