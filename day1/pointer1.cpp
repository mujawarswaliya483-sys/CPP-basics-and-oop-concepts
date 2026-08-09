#include<iostream>
using namespace std;

int main(){
int age = 25;
int* ptr = &age;

cout<<"value of age:"<<age<<endl;
cout<<"address of age:"<<&age<<endl;
cout<<"address of pointer:"<<ptr<<endl;
}
