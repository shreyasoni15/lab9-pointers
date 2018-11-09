#include <iostream>
using namespace std;

int main() {
	int ar[10]; //create array of size 10
	for(int i=0;i<10;i++){
		cout<<"Enter your Number";
		cin>>ar[i];
	}
	cout<< endl <<endl;
	cout<< "Print using Index Method:" <<endl; 
	for(int i=0;i<10;i++)
		cout<< ar[i] << endl;
	cout<< endl <<endl;
	cout<< "Print using Pointer Method:" <<endl;
	int *ptr=&ar[0];
	for(;ptr<(&ar[10]);ptr++)
		cout<< *ptr << endl;
	return 0;
}
