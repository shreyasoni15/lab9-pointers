#include <iostream>
using namespace std;

string m_strcpy(string str1,string str2){
	str2=str1;
	return str2;
}

string m_strcat(string str1,string str2){
	return str1+str2;
}

int m_strlen(string str){
	int i;
	for( i=0;(!(str[i]=='\0'));i++){
	}return i;
}

int m_strcmp(string str1, string str2){
	bool flag;
	int i;
	for(i=0;i<str1.length();i++)
		if(str1[i]!=str2[i]){
			flag=false;
			break;
		}	
		if(!(flag))
			if(str1[i]>str2[i])	
				return -1;
			else
				return 1;
		else return 0;		
}

int m_strchr(string str1,char ch){
	for(int i=0;i<str1.length();i++)
		if(str1[i]==ch)
			return ++i;
		return -1;	
}

char* m_strstr(string str1,string str2){
	for(int i=0;i<str1.length();i++)
		if(str1[i]==str2[0])
			if(str1.substr(i,str2.length())==str2)
				return &str1[i];
			else 
				return NULL;
				
}

int main() {
	string str1,str2="";
	char ch;
	cout<<"Enter a String"<<endl;
	cin>>str1;
	cout<<"Copied String: "<<m_strcpy(str1,str2)<<endl;
	cout<<"Enter 2 Strings:"<<endl;
	cin>>str1>>str2;
	cout<<"Conatenated String:"<<m_strcat(str1,str2)<<endl;
	cout<<"Enter a String: "<<endl;
	cin>>str1;
	cout<<"Length: "<<m_strlen(str1)<<endl;
	cout<<"Enter 2 Strings: "<<endl;
	cin>>str1>>str2;
	cout<<"Comparison of String returns "<<m_strcmp(str1,str2)<<endl;
	cout<<"Enter a String and a character:"<<endl;
	cin>>str1>>ch;
	cout<<"First occurence of chracter:"<<m_strchr(str1,ch)<<endl;
	cout<<"Enter string and the corresponding substring:"<<endl;
	cin>>str1>>str2;
	cout<<"Reference to Substring:"<<(m_strstr(str1,str2))<<endl;
	return 0;
}
