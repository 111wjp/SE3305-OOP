#include<iostream> 
#include<string.h> 
using namespace std;
class String 
{ 
    public: 
      String()
      {
          p=NULL;

      } 
      String(char *str);
      friend String operator + (String &string1,String &string2); 
      void display(); 
      ~String() 
       {
         delete []p;
        } 
    private: 
       char *p; 
       int len; 
}; 
String::String(char *str) 
{
   p=str;
} 

void String::display() 
{
  cout<<p<<endl;
} 

String operator + (String &string1,String &string2) 
{ 
 String string3; 
 string3.len=string1.len+string2.len; 
 string3.p=new char [string3.len+1]; 
 strcpy(string3.p,string1.p); 
 strcat(string3.p,string2.p); 
 return string3; 
} 
int main() 
{ 
 String s1("Hello"),s2("World"),s3; 
 s1.display(); 
 s2.display(); 
 s3=s1+s2; 
 s3.display(); 
 return 0; 
}

