#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[]="Aniket";
    char str2[]="kumar";
	// char str2[20];

	 cout<<str<<endl;

	 int r=strlen(str);
	 cout<<r<<endl;

	 strrev(str);
	 cout<<str<<endl;

	 strcat(str,str2);
	 cout<<str<<endl;

	strcpy(str2,str);
	cout<<str2<<endl;
	return 0;
}