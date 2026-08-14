// MULTI-LEVEL INHERITANCE

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
};


class grandStudent : public Student {
public:
	string researchArea;
};

int main(){
	grandStudent s1;
	s1.name="tony stark";
	s1.researchArea = "quantum physics";
	cout<<s1.name<<endl;
	cout<<s1.researchArea<<endl;
	return 0;
}