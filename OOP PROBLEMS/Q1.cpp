#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	string name;
	int rollNo;
};

int main(){
	Student s1;
cout<<"enter your name:"<<endl;
cin>>s1.name;
cout<<"enter your rollNo:"<<endl;
cin>>s1.rollNo;

cout<<"your name is : \n"<<s1.name<<endl;
cout<<"your rollNo is :"<<s1.rollNo<<endl;
}