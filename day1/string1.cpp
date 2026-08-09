#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string name;
	cout<<"enter you name:"<<endl;
	cin>>name;

	cout<<"your name is:"<<name<<endl;

	cout<<"length of name is:"<<name.length()<<endl;

	cout<<"first character:"<<name[0]<<endl;

	cout<<"last character:"<<name[name.length() - 1]<<endl;

	name[0] = 'A';

	cout<<"After changing first character:"<<name<<endl;


}