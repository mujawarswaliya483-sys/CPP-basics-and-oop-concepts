#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	int rollNo;
	int marks;

public:
	void input(){
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter rollNo:"<<endl;
		cin>>rollNo;
		cout<<"enter marks:"<<endl;
		cin>>marks;
	}

	int getMarks(){
		return marks;
	}

	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Roll No:"<<rollNo<<endl;
		cout<<"marks:"<<marks<<endl;
	}
};

int main(){
	Student s[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Student:"<<i+1<<endl;
		s[i].input();
		cout<<endl;
	}
	int highestIndex = 0;
	for(int i=0;i<5;i++)
	{
		if(s[i].getMarks()>s[highestIndex].getMarks())
		{
			highestIndex=i;
		}
	}
	cout<<"Highest scoring student:"<<endl;
	s[highestIndex].display();
	return 0;
}