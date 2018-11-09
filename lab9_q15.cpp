#include <iostream>
using namespace std;

int main() {
	char str[20],*p;
	cout<<"Enter about 10 characters of string\n";
	cin>>str;
	p=&str[0];
	for(int i=0;(!(*p=='\0'));i++){
		for(int j=i;(!(*p=='\0'));j++){
			cout<<str[j];
			p++;
		}
			p=&str[i];
			cout<<"\n";
	}
	return 0;
}
