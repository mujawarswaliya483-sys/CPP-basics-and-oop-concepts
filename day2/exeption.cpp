#include<iostream>
using namespace std;

int main(){
	cout<<"Execution Starting...";
	int a,b,c;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;

	try{
		if(b==0)
			throw b;
		c=a/b;
	    cout<<"result:"<<c<<endl;

	}catch(int x){
		cout<<cant devide by 0<<endl;
	}

	cout<<"execution ended";
	return 0;
}