#include <iostream>
using namespace std;

int main() {
	int a,b,*p=&a; //point p to a
	b=*p; //store value pointed by p in b
	cout<<"'a' equals "<< a <<endl;
	cout<<"'b' equals "<< b <<endl;
	cout<<"'*p' dereferences value "<<*p<<endl;
	a=2;b=3; //assigning a and b
	cout<<"'a' equals "<< a<<endl;
	cout<<"'b' equals "<< b<<endl;
	cout<<"'*p' dereferences value "<<*p<<endl;
	p=&b;
	cout<<"'a' equals "<< a<<endl;
	cout<<"'b' equals "<< b<<endl;
	cout<<"'*p' dereferences value "<< *p <<endl;
}
