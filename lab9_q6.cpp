#include <iostream>
using namespace std;

int main() {
	char str[20],*p,*dummy,*dummy1;
	cout<<"Enter about 10 characters of string\n";
	cin>>str;
	int i=0,j;
	while(!(str[i]=='\0')){
		p=&str[i];
		i++;
	}
	for(i=0;i<=(p-(&str[0]));i++){
		for(int j=i;j>=0;j--)
			cout<<*((p-j));
			cout<<"\n";
	}
	return 0;
}
