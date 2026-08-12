#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	int rollNo;
	int marks;
public:
	Student(string n,int r,int m){
		name =n;
		rollNo = r;
		marks =m;
	}
void display(){
	cout<<"name:"<<name<<endl;
}
};

int main(){
	Student s1("swaliya",30,80);
	s1.display();
}