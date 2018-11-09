#include <iostream>
using namespace std;

int main() {
	string str;
	cout<<"Enter your Name:"<<endl;
	cin>>str;
	cout<<endl<<endl;
	cout<<"Print using Index Method"<<endl;
	for(int i=0;i<(str.length());i++)
		cout<<str[i]<<endl;
	cout<<endl<<endl;
	cout<<"Print using Pointer Method"<<endl;	
	char *ptr=&str[0],*ptr1=ptr+(str.length());
	for(;ptr<ptr1;ptr++)
		cout<<*ptr<<endl;
	return 0;
}
