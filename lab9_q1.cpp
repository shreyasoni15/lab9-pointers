#include <iostream>
using namespace std;

int main() {
	int in=0,*inp=&in;
	char ch='A',*chp=&ch;
	float fl=0.0,*flp=&fl;
	double dl=0.0,*dlp=&dl;
	cout<<"Size of integer Variable and corresponding pointer:"<<sizeof(in)<<" "<<sizeof(inp)<<endl;
	cout<<"Size of character Variable and corresponding pointer:"<<sizeof(ch)<<" "<<sizeof(chp)<<endl;
	cout<<"Size of float Variable and corresponding pointer:"<<sizeof(fl)<<" "<<sizeof(flp)<<endl;
	cout<<"Size of double Variable and corresponding pointer:"<<sizeof(dl)<<" "<<sizeof(dlp)<<endl;
	return 0;
}
