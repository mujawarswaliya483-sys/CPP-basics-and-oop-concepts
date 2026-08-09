#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	int rollNo;
    int marks[5];
    float percent;
    
public:
	void input(){
		cout<<"Name:"<<endl;
		cin>>name;
		cout<<"rollNo:"<<endl;
		cin>>rollNo;
		cout<<"marks:"<<endl;
		for(int i=0;i<5;i++){
			cin>>marks[i];
		}
		
	}
	int tot_marks(){
	    int total=0;
		for(int i=0;i<5;i++){
			total = total + marks[i];
		}
		return total;
	}

	float percentage(){
		percent = (tot_marks()/5.0) * 100.0;
		return percent;
	}

	void grade(){
	    percent = tot_marks();
		if(percent>=90){
			cout<<"A";	
		}
		else if(percent>70 && percent<90){
			cout<<"B";
		}
		else{
			cout<<"C";
		}
	}
	void display(){
		cout<<"name:"<<name<<endl;
		cout<<"roll no:"<<rollNo<<endl;
		cout<<"total marks:"<<tot_marks()<<"/"<<500<<endl;
		cout<<"percentage:"<<percentage()<<"%"<<endl;
		cout<<"Grade:";
		grade();
		cout<<endl;
	}
};

int main(){
	Student s1;
	s1.input();
	s1.display();
}