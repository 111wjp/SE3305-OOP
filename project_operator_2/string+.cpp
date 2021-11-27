#include <iostream>
#include <string>
using namespace std;

string operator + (string &string1,string &string2){ 
 string string3; 
 string3.len=string1.len+string2.len; 
 string3.p=new char [string3.len+1]; 
 strcpy(string3.p,string1.p); 
 strcat(string3.p,string2.p); 
 return string3; 
} 

int main(){
	string str1 = "asd";
	string str2 = "fgh";
	cout<<str1+str2<<endl;
	return 0;
}

